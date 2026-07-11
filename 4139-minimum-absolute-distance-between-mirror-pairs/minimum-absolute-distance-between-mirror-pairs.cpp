class Solution {
public:
    int reversva(int n){
        int ld=0;
        int rev=0;
        while(n>0){
            ld=n%10;
            rev=rev*10+ld;
            n=n/10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
       int n=nums.size();
       unordered_map<int,int>mp;
       int result=INT_MAX;
       for(int i=0;i<n;i++){
        if(mp.find(nums[i])!=mp.end()){
            result=min(result,i-mp[nums[i]]);

        }
        mp[reversva(nums[i])]=i;
       }
       return result==INT_MAX?-1:result;
    }
};