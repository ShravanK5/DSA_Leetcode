class Solution {

    private:
        void solve(vector<int>& candidates,int index,vector<vector<int>> &ans,vector <int> output,int target,int sum)
        {
           // Base case
            if (sum == target) {
                ans.push_back(output);
                return;
            }

            if (index >= candidates.size() || sum > target) {
                return;
            }

 
            //include 
            
            sum = sum + candidates[index];
            output.push_back(candidates[index]);
            solve(candidates,index, ans ,output, target ,sum);
            output.pop_back();
            sum = sum - candidates[index];

            //exculde 
            solve(candidates,index+1, ans ,output, target,sum );


        }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector <int> output;
        int index = 0 ;
        
        solve(candidates,index, ans ,output, target,0 );
        return ans;
    }
};