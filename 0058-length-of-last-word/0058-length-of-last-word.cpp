class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans =0;
        int count = 0;
        for( char ch : s)
        {
            if( ch == ' ')
            {
                if(count > 0)
                {
                    ans = count;
                    count =0;
                }
            }
            else
            {
                count++;
                ans = count;
            }
        }
        return ans;
    }
};