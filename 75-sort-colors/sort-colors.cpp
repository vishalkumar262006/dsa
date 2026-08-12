class Solution {
public:
    void sortColors(vector<int>& nums) {
         unordered_map<int,int>mp;
         for(int x:nums){
            mp[x]++;
         }
         int i=0;
         while(mp[0]>0){
            nums[i]=0;
            i++;
            mp[0]--;
         }
         while(mp[1]>0){
            nums[i]=1;
            i++;
            mp[1]--;
         }
          while(mp[2]>0){
            nums[i]=2;
            i++;
            mp[2]--;
         }
        

    }
};