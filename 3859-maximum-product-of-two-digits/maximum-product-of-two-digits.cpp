class Solution {
public:
    int maxProduct(int n) {
        int maxi=0;
        int ld=0;
        vector<int>pd;
        while(n>0){
            ld=n%10;
            pd.push_back(ld);
            n=n/10;
        }
        for(int i=0;i<pd.size();i++){
            for(int j=i+1;j<pd.size();j++){
                maxi=max(maxi,pd[i]*pd[j]);
            }
        }
        return maxi;

    }
};