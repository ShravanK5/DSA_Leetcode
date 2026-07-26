class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size() - 1;
        if (n < 2) {
            return -1;
        }
        long a = nums[n] * nums[n - 1] * nums[n - 2];
        long b = nums[0]* nums[1]* nums[n];
        return max(a,b);
    }
};