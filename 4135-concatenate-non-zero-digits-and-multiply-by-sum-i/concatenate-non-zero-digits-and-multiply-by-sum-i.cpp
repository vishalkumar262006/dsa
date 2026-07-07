class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long x=0;
     vector<long long >no;
        while(n>0){
            int ld=n%10;
            n=n/10;
            if(ld==0){
                continue;
            }
            else{
             no.push_back(ld);
                sum+=ld;
            }
        }
       reverse(no.begin(),no.end());
        for(long long digit:no){
            x=x*10+digit;
        }
        return x*sum;
    }
};