class Solution {
public:
    int minimumPushes(string word) {
        int cost =0;
        int ans=0;
        for(int i =0 ; i< word.size();i++)
        {
            if(i % 8 == 0)
            {
                cost++;
            }
            ans = ans+cost;
        }
        return ans;
    }
};