class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        int product = 1;
        int np =n;
        while(np >0)
        {
            int rem = np %10;
            sum = sum +rem ;
            product = product * rem;
            np = np / 10;
        }

        int tot = sum + product;
        if(n % tot == 0)
        return true;
        else
        return false;
    }
};