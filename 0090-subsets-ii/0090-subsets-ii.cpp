class Solution {

    private:
        void solve(vector<int>& nums,set<vector<int>>&ans,vector<int>output,int index)
        {
            //base case
            if(index >= nums.size())
            {
                ans.insert(output);
                return;
            }

        //exclude
        solve(nums,ans, output, index+1);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,ans, output, index+1);
        }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>output;
        int index=0;
        solve(nums,ans,output,index);
        vector<vector<int>> result(ans.begin(), ans.end());

        return result;
    }
};