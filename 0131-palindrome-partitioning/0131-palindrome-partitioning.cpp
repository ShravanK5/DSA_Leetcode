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

        void solve(string s, vector<vector<string>>& ans, vector<string>& output, int index) {
        // base case
        if (index == s.length()) {
            ans.push_back(output);
            return;
        }

        for (int i = index; i < s.length(); i++) {
            string sub = s.substr(index, i - index + 1);
            if(isPalindrome(sub))
            {
            output.push_back(sub);

            solve(s, ans, output, i + 1);
            output.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        // for loop banake substring genaarte karo and then chack at evry state
        vector<vector<string>> ans;
        vector<string> output;
        int index = 0;

        solve(s, ans, output, index);
        return ans;
    }
};