int sum(vector<int>& nums,int mid)
{
    int sum =0;
    for(int i =0 ; i< nums.size();i++)
    {
        sum += ceil((double)nums[i]/mid);
    }
    return sum ;
}

int maxday(vector<int>& nums)
{
    int maxi = INT_MIN;
    for(int i =0 ; i < nums.size() ; i++)
    {
        maxi = max(maxi, nums[i]);
    }
    return maxi;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = maxday(nums);
        int ans;
        int sums;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            sums = sum(nums,mid);
            if(sums <= threshold )
            {
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return ans;
    }
};