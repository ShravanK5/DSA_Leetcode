int minday(vector<int>& bloomday)
{
    int mins = INT_MAX;
    for(int i =0 ; i < bloomday.size() ; i++)
    {
        mins = min(mins, bloomday[i]);
    }
    return mins;
}
int maxday(vector<int>& bloomday)
{
    int maxi = INT_MIN;
    for(int i =0 ; i < bloomday.size() ; i++)
    {
        maxi = max(maxi, bloomday[i]);
    }
    return maxi;
}

bool bloom(vector<int>& bloomday, int mid, int m, int k)
{
    int flowers =0 ;
    int bouquet =0 ;

    for(int i =0 ; i < bloomday.size();i++)
    {
        if(bloomday[i]<= mid)
        {
            flowers++;
        }
        else
        {
            bouquet += flowers/k;
            flowers=0;
        }
    }
    bouquet += flowers / k;
    return bouquet >= m;
}
class Solution {
public:
    int minDays(vector<int>& bloomday, int m, int k) {
        if(bloomday.size() < (long long)m*k)
        {
            return -1;
        }
        int start = minday(bloomday);
        int end = maxday(bloomday);
        int ans;
        while(start <= end)
        {
            int mid = start + (end - start)/2;

            if(bloom(bloomday,mid,m,k))
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