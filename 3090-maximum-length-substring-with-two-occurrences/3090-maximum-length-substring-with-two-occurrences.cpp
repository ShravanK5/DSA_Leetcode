class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res=0;
        for(int left=0; left<s.length(); left++)
        {
            vector<int> count(26,0);
            for(int right=left; right<s.length(); right++)
            {
                int index=s[right]-'a';
                count[index]++;
                if(count[index] > 2)
                {
                    break;
                }
                res=max(res , right-left+1);
            }
        }
        return res;
    }
};