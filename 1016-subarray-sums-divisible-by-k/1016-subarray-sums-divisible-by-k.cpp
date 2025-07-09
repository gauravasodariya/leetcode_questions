class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        int sum=0;
        int count=0;
        mp.insert({0,1});
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            int mod=((sum%k)+k)%k;
            if(mp.find(mod)!=mp.end())
            {
                count=count+mp[mod];
            }
            mp[mod]++;
        }
        return count;
    }
};