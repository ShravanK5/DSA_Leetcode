class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
    int n = nums.size();

    vector<int> pref(n);
    //first element 0
    pref[0]=0;

    vector<int> suff(n);
    //laste element 0
    suff[n-1] = 0;

    //calclating prefix array
    for( int i =1 ; i < n ; i++)
    {
        pref[i] = pref[i-1]+ nums[i-1];
    }

    //calculating suffix 
    for( int i = n-2 ; i >=0 ; i--)
    {
        suff[i] = suff[i+1]+ nums[i+1];
    }

    //check which index is same 
    for(int i = 0 ; i < n ; i++)
    {
        if(pref[i] == suff[i])
        return i;
    }

    return -1;
    }
};