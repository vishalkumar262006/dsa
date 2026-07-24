class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        //store all pair xors
        unordered_set<int>s1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                s1.insert(nums[i]^nums[j]);
            }
        }
        //aab pair xor ka nums ke sath xor
        unordered_set<int>s2;
        for(int pairxor:s1 ){
            for(int num:nums){
                s2.insert(pairxor^num);
            }
        }
        return s2.size();
    }
};