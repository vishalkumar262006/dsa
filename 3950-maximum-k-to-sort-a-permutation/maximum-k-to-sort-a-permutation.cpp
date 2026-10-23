class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        if(is_sorted(nums.begin(),nums.end())){
            return 0;
        }
    int k=-1;
    for(int i=0;i<n;i++){
        if(nums[i]!=i){
            k&=nums[i];//2 & -1==2
        }
    }
    return k==-1?0:k;
       
    }
};