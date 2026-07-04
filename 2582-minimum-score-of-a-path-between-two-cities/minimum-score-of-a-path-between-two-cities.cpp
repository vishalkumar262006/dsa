class Solution {
public:
    int ans=INT_MAX;
     void dfs(int node, vector<int>&vis, vector<pair<int,int>>adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            int d=it.first;
            int wt=it.second;
            ans=min(ans,wt);
            if(!vis[d]){
                dfs(d,vis,adj);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
       vector<pair<int,int>>adj[n+1];
        for(auto it:roads){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<int>vis(n+1,0);
            dfs(1,vis,adj);
        return ans;
    }
};