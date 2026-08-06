class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true) {
            int prod = 1;
            int dup = n;
            while (dup > 0) {
                int rem = dup % 10;
                prod = prod * rem;
                dup = dup / 10;
            }
            if (prod % t == 0){
                return n;
            }
            n++;
        }
    }
};