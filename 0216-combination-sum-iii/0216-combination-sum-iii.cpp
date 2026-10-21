class Solution {

private:
    void solve(vector<vector<int>>& ans, vector<int> nums, vector<int> output,
               int index, int k, int n) {

        // base case
        if (k == 0) {
            if (n == 0) {
                ans.push_back(output);
            }
            return;
        }

        if (index >= nums.size() || n <= 0) 
        {
            return;
        }

        // include
        if (nums[index] <= n && n != 0) {
            output.push_back(nums[index]);
            solve(ans, nums, output, index+1, k-1, n - nums[index]);
            output.pop_back();
        }

        // exclude
        solve(ans, nums, output, index + 1, k, n);
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        int index = 0;
        vector<int> output;
        solve(ans, nums, output, index, k, n);
        return ans;
    }
};