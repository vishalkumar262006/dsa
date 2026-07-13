class Solution {
public:
    int n;
    void permu(vector<int>&temp, vector<vector<int>>&result,vector<int>& nums,set<int>&st){
        
        if(temp.size()==n){
            result.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(st.find(nums[i])==st.end()){
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                permu(temp,result,nums,st);
                temp.pop_back();
                st.erase(nums[i]);
            }

        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        n=nums.size();
        vector<int>temp;
        set<int>st;
        vector<vector<int>>result;
         permu(temp,result,nums,st);
        return result;
    }
};