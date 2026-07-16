class Solution {
public:
    int n;
    int result=INT_MAX;
    void solve(int idx,vector<int>& cookies,int k,  vector<int>&bache){
        if(idx>=n){
            int ans= *max_element(begin(bache),end(bache));
            result=min(result,ans);
            return;
        }
        int cookie=cookies[idx];
        for(int i=0;i<k;i++){
             bache[i]+=cookie;
             solve(idx+1,cookies,k,bache);
             bache[i]-=cookie;
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        n=cookies.size();
        vector<int>bache(k,0);
        solve(0,cookies,k,bache);
        return result;
    }
};