class Solution {
    typedef pair<long long ,int>p; //lomg lomg for weight and int for node
public:
    bool check(int mid,int n, long long k,unordered_map<int, vector<vector<int>>>& adj){
        vector<long long > dis(n,LLONG_MAX);
            priority_queue<p,vector<p>,greater<p>>pq;
            dis[0]=0;
            pq.push({0,0});
            while(!pq.empty()){
                int node=pq.top().second;
                long long d=pq.top().first;
                pq.pop();
                if(d>k) break;
                if(node==n-1) return true;
                if(dis[node]<d){
                    continue;
                }
                for(auto it:adj[node]){
                    int adjnode=it[0];
                    int wt=it[1];
                    if(wt<mid){
                        continue;//ans to mid chaiye na 
                    }
                    if(d+wt<dis[adjnode]){//matlab dist[afjnid] se bhi kaam mil raha hai
                     dis[adjnode]=d+wt;
                     pq.push({dis[adjnode],adjnode});
                              
                    }
                }

        }
        return false;

    }
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n=online.size();
        unordered_map<int,vector<vector<int>>>adj;
        int l= INT_MAX;
        int r =0;
        for(auto it:edges){
            int u= it[0];
            int v=it[1];
            int w= it[2];
            if(!online[u] || !online[v]){
                continue;
            }
            adj[u].push_back({v,w});
            l=min(l,w);
            r=max(r,w);
        }
        //
        int ans=-1;
        if(l==INT_MAX){
            return -1;
        }
        while(l<=r){
            int mid= l+(r-l)/2;
            if(check(mid,n,k,adj)){
                ans=mid;
                l=mid+1;

            }
            else{
                r=mid-1;

            }
        }
        return ans;
    }
};