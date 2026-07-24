class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        // //store all pair xors
        // unordered_set<int>s1;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         s1.insert(nums[i]^nums[j]);
        //     }
        // }
        // //aab pair xor ka nums ke sath xor
        // unordered_set<int>s2;
        // for(int pairxor:s1 ){
        //     for(int num:nums){
        //         s2.insert(pairxor^num);
        //     }
        // }
        // return s2.size();
        int maxel= *max_element(begin(nums),end(nums));
        int t=1;
        while(t<=maxel){
            // t*=t*2;
            t*=t<<1;
        }
        vector<bool>s1(t,false);
        vector<bool>s2(t,false);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                s1[nums[i]^nums[j]]=true;
            }
        }
        for(int i=0;i<t;i++){
            if(s1[i]==true){
                for(int chikki:nums){
                    s2[i^chikki]=true;
                }
            }
        }
        int count=0;
        for(int i=0;i<t;i++){
            if(s2[i]==true){
                count++;
            }
        }
        return count;

    }
};