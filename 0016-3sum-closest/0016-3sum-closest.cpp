class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0;
        int bestsum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                sum = nums[i] + nums[left] + nums[right];

                if (abs(sum - target) < abs(bestsum - target))
                    bestsum = sum;

                if (sum < target)
                    left++;
                else
                    right--;
            }
        }
        return bestsum;
    }
};