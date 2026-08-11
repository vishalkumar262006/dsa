class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closestsum=100000;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(target-sum)<abs(target-closestsum)){
                    closestsum=sum;
                }
                if(sum<target) l++;
                else r--;
            }
        }
        return closestsum;
    }
};