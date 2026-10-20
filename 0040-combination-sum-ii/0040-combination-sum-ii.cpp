class Solution {

    private:
        void solve(vector<int>& candidates,int index,vector<vector<int>> &ans,vector <int> output,int target)
        {
           // Base case
            if (target == 0) {
                ans.push_back(output);
                return;
            }
            for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
            }

            if (candidates[i] > target) {
                break;
            }

            // Include
            output.push_back(candidates[i]);

            solve(candidates, i + 1, ans, output,
                target - candidates[i]);

            // Backtrack
            output.pop_back();
            }

        
        }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector <int> output;
        int index = 0 ;
        sort(candidates.begin(), candidates.end());
        
        solve(candidates,index, ans ,output, target );
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};