class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true) {
            int x = n;
            int pdt = 1;

            while (x > 0) {
                pdt *= (x % 10);
                x /= 10;
            }

            if (pdt % t == 0)
                return n;

            n++;
        }
    }
};