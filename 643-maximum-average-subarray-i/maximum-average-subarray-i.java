class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n=nums.length;
        int maxsum= Integer.MIN_VALUE;
        int i=0;
        int j=0;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
                maxsum= Math.max(maxsum,sum);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return (double)maxsum/k;
       
    }
}