class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>>&adj,vector<int>&vis,int &v,int &e){
        vis[node]=1;
        v++;
        e+=adj[node].size();
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,v,e);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adj;
        int result=0;
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==1){
                continue;
            }
            int v=0;
            int e=0;
            dfs(i,adj,vis,v,e);
            if((v*(v-1))==e){
                result++;
            }
        }
        return result;
    }
};