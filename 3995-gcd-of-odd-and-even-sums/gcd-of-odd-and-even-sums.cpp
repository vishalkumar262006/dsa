class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int evensum=0;
        for(int i=1;i<=n;i++){
         sumodd+=2*i-1;
         evensum+=2*i;
        }
        return __gcd(evensum,sumodd);
    }
};