class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum=0;
        int pdt=1;
        while(n>0){
            sum+=n%10;
            pdt*=n%10;
            n=n/10;
        }
        int ans=sum+pdt;
        if(original%ans==0){
            return true;
        }
        else{
            return false;
        }
    }
};