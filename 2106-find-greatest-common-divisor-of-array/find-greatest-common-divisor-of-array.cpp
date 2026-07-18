class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int first=nums[0];
        int last=nums[n-1];
        return __gcd(first,last);
    }
};