class Solution {
    private:
    void solve(vector<int>& nums , int index , vector<vector<int>> &ans)
    {
        //base case
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        //recursion relation 

        for( int j = index ; j < nums.size(); j++)
        {
            swap(nums[index] , nums[j]);
            solve(nums, index+1, ans);

            // backtracking to get back to the same array again for eg abc swap a,b we get bac but before going to the next itertion or index we bneed abc only if we swap using bac it will become bca therfore back tracking is necessary 
            swap(nums[index] , nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0 ;
        solve(nums, index, ans);
        return ans;

    }
};