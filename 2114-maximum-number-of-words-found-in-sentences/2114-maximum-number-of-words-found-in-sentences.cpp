class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    
        int tot = 0;

        for (string s : sentences) {
            int cnt = 1;
            for (char ch : s) {
                if (ch == ' ') {
                    cnt++;
                }
            }
            tot = max(cnt,tot);
            
        }
        return tot;
    }
};