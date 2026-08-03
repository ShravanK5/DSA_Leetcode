class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i = 0 ;i < nums.size() ;i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                mp[nums[i]]++;
            }
            else
            {
                mp[nums[i]] = 1;
            }
        }
        vector<int>ans;

         for (auto it : mp) {
            if(it.second > nums.size()/3)
            {
                ans.push_back(it.first);
            }
            if(ans.size()==2)
            {
                break;
            }
        }
        return ans;
    }
};