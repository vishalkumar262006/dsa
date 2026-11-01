class Solution {
public:
    int minMoves(vector<int>& nums) {
        // int mini=INT_MAX;
        // int ans=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     mini=min(mini,nums[i]);
        // }
        // for(int i=0;i<n;i++){
        //     ans+=nums[i]-mini;
        // }
        // return ans;
        

        //more efficient code
        int n= nums.size();
        int sum= accumulate(nums.begin(),nums.end(),0);
        int mini= *min_element(nums.begin(),nums.end());
        return sum-n*mini;
    }
};