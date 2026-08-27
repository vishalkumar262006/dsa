class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int avgvalue= INT_MIN;
        int n=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
                avgvalue=max(avgvalue,sum);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return avgvalue/(double)k;

    }
};