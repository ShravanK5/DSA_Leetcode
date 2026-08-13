class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxans = nums[0];
        int currsum = nums[0];
        int minans = nums[0];

        for ( int i =1 ; i < nums.size() ; i++)
        {
            currsum = max(currsum+nums[i] , nums[i]);

            maxans = max(maxans , currsum);

        }   
        currsum = nums[0];
        for ( int i =1 ; i < nums.size() ; i++)
        {
            currsum = min(currsum+nums[i] , nums[i]);

            minans = min(minans , currsum);

        }   
        return max(abs(minans) , maxans);
    }
};