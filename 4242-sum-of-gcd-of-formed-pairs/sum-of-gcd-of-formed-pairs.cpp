class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixgrid;
        int maxi=-1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            prefixgrid.push_back(__gcd(nums[i],maxi));
        }
        sort(prefixgrid.begin(),prefixgrid.end());
        int i=0;
        int j=n-1;
        long long sum=0;
        while(i<j){
            sum+=__gcd(prefixgrid[i],prefixgrid[j]);
            i++;
            j--;
        }
        return sum;
    }
};