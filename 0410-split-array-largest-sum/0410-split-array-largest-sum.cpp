int sumof(vector<int>& nums)
{
    int sum =0;
    for(int i =0; i< nums.size();i++)
    {
        sum+= nums[i];
    }
    return sum;
}
int maxweight(vector<int>& nums)
{
    int maxi = INT_MIN;
    for(int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
    }
    return maxi;
}

bool capacity(vector<int>& nums, int mid, int k)
{
    int ways =1;
    int sum =0 ;
    for( int i =0 ; i< nums.size();i++)
    {
        if (sum + nums[i] <= mid)
        {
            sum = sum + nums[i];
        }
        else
        {
            ways++;
            sum =nums[i];
        }
    }
    return ways <= k;
}


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = maxweight(nums);
        int end = sumof(nums);
        int ans;

        while( start <= end)
        {
            int mid = start +(end - start)/2;

            if(capacity(nums,mid,k))
            {
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};