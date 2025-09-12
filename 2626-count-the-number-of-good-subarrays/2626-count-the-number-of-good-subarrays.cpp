class Solution {
public:
    long long countGood(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        long long ans=0;
        long long pair=0;
        int j=0;
        int i=0;
        while(j<nums.size())
        {
            pair+=mp[nums[j]];
            mp[nums[j]]++;
            while(pair>=k && i<j)
            {
                ans+=nums.size()-j;
                mp[nums[i]]--;
                pair-=mp[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};