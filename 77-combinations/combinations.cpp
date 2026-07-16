class Solution {
public:
    void solve(int start, vector<int>&temp, vector<vector<int>>&ans, int k,int n){
           if(k==0){
            ans.push_back(temp);
            return;
           }
           //khandnai tempalte wala
        //    if(start>n){
        //     return;
        //    }
        //    temp.push_back(start);
        //    solve(start+1,temp,ans,k-1,n);
        //    temp.pop_back();
        //    solve(start+1,temp,ans,k,n);
        //for loop wala;
       for(int i=start;i<=n;i++){
         temp.push_back(i);
         solve(i+1,temp,ans,k-1,n);
         temp.pop_back();
       }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(1,temp,ans,k,n);
        return ans;
    }
};