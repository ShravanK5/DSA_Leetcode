class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> tt;

        for(char ch : s)
        {
            if(ch == '#')
            {
                if(!ss.empty())
                {
                    ss.pop();
                }
            }
            else
            {
                ss.push(ch);
            }
        }
        for(char ch : t)
        {
            if(ch == '#')
            {
                if(!tt.empty())
                {
                    tt.pop();
                }

            }
            else
            {
                tt.push(ch);
            }
        }
        if( ss == tt)
        {
            return true;
        }
        else
        return false;
    }
};