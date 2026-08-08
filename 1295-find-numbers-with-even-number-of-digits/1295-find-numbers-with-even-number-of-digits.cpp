class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int count =0;
        for( int i = 0 ; i < nums.size() ; i++)
        {
            int dup = nums[i];
            while(dup > 0)
            {
                int digit = dup % 10;
                dup = dup /10;
                count++;
            }
            if(count % 2 == 0)
            ans++;
            else
            count=0;
        }
        return ans;
    }
};