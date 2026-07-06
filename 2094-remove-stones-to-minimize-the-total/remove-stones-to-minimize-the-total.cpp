class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        while(k--){
            int piles=pq.top();
            pq.pop();
            piles=piles-piles/2;
            pq.push(piles);
        }
        long long sum=0;
        while(!pq.empty()){
          int utee=pq.top();
           pq.pop();
           sum+=utee;
        }
        return sum;
    }
};