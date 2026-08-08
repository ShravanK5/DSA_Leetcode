class Solution {
public:
    int subtractProductAndSum(int n) {
        int dup = n;
        int sum =0 ;
        int product =1;

        while(dup > 0)
        {
            int digit = dup % 10;
            sum = sum + digit;
            product = product * digit;
            dup = dup /10;
        }

        return product-sum;
    }
};