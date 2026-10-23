class Solution {

private:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            if (s[start] != s[end]) {

                return false;
            }
            start++;
            end--;
        }
        return true;
    }

        void solve(string s, vector<vector<string>>& ans, vector<string>& output) {
        // base case
        if (s.size() == 0 ) {
            ans.push_back(output);
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            string sub = s.substr(0, i + 1);
            if(isPalindrome(sub))
            {
            output.push_back(sub);

            solve(s.substr(i + 1), ans, output);
            output.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        // for loop banake substring genaarte karo and then chack at evry state
        vector<vector<string>> ans;
        vector<string> output;

        solve(s, ans, output);
        return ans;
    }
};