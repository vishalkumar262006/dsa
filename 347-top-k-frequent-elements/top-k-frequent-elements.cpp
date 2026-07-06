class Solution {
    typedef pair<int,int>p;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<p,vector<p>,greater<p>>pq;
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     pq.push({it->second,it->first});
        //     if(pq.size()>k){
        //         pq.pop();
        //     }
        // }
        for(auto it:mp){
            pq.push({it.second,it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};