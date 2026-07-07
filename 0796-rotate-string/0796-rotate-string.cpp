class Solution {
public:
    bool rotateString(string s, string goal) {
        char first = s[0];
        int index;
        int n = s.size();
        string original = s;

        for (int i = 0; i < s.size(); i++) {

            s = original;

            reverse(s.begin(), s.end());
            reverse(s.begin(), s.begin() + (n - i));
            reverse(s.begin() + (n - i), s.end());

            if (s == goal) {
                return true;
            }
        }

        return false;
    }
};