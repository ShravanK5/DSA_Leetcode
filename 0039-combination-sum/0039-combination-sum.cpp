class Solution {

    private:
        void solve(vector<int>& candidates,int index,vector<vector<int>> &ans,vector <int> output,int target)
        {
           // Base case
            if (target == 0) {
                ans.push_back(output);
                return;
            }

            if (index >= candidates.size() ) {
                return;
            }

 
            //include 
           if(candidates[index] <= target )
           { 
            target = target - candidates[index];
            output.push_back(candidates[index]);
            solve(candidates,index, ans ,output, target);
            output.pop_back();
            target = target + candidates[index];
           }
            //exculde 
            solve(candidates,index+1, ans ,output, target );


        }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector <int> output;
        int index = 0 ;
        
        solve(candidates,index, ans ,output, target );
        return ans;
    }
};