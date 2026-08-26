class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int len =0;
        int left =0;
        for(int i = 0 ; i< s.length();i++)
        {
            while(st.find(s[i]) != st.end())
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            len = max(len , i - left +1);
        }
        return len;
    }
};