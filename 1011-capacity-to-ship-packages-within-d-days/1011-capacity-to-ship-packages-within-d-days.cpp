int sumof(vector<int>& weights)
{
    int sum =0;
    for(int i =0; i< weights.size();i++)
    {
        sum+= weights[i];
    }
    return sum;
}

int minweight(vector<int>& weights)
{
    int maxi = INT_MIN;
    for(int i =0; i< weights.size();i++)
    {
        maxi = max(maxi,weights[i]);
    }
    return maxi;
}

bool canCapacity(vector<int>& weights, int mid , int days)
{
    int reqdays =1;
    int sum =0;
  
        for (int weight : weights) {
            if (sum + weight <= mid) {
                sum += weight;
            } else {
                reqdays++;
                sum = weight;
            }
    }
    return reqdays <= days;
}
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = minweight(weights);
        int end = sumof(weights);
        int ans;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(canCapacity(weights,mid,days))
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