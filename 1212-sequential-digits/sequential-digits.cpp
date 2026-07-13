class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        for(int i=1;i<=8;i++){
            q.push(i);
        }
        vector<int>result;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node>=low  && node<=high){
                result.push_back(node);
            }
            int ld=node%10;
            if(ld+1<=9){
                q.push(node*10+(ld+1));
            }
        }
        return result;
    }
};