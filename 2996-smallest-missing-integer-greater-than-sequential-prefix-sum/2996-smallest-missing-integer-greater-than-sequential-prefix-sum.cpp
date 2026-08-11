class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum =nums[0];
        int maxsum = INT_MIN;
        set <int> s;

        for (int x : nums) {
            s.insert(x);
        }


        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
               sum += nums[i];
            }
            else {
                break;
            }
        }


            while(s.count(sum))
            {
                sum++;
            }
        
        return sum;
    }
};