class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        int maxi=INT_MIN;
        
        int ans;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
            mini=min(mini,nums[j]);
            }
            ans=maxi-mini;
            if(ans<=k){
                return i;
            }
           
        }
         return -1;
      
    }
};