class Solution {

    private:

    void solve(string current ,vector<string>& ans , int open  , int close, int n)
    {
        //base case
        if( open == 0 && close == 0 )
        {
            ans.push_back(current);
            return;
        }

        ///two choices either add or remove
        if (open != 0)
        {
            current.push_back('(');
            solve(current , ans , open-1 , close , n);
            current.pop_back();
        }

        if( close > open )
        {
            current.push_back(')');
            solve(current , ans , open , close-1 , n);
            current.pop_back();
        }


    }
public:
    vector<string> generateParenthesis(int n) {
        string current= "";
        vector<string> ans;
        int open = n;
        int close = n;

        solve(current , ans , open , close , n);
        return ans;
    }
};