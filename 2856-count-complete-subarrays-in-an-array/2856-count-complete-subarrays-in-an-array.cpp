class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) 
    {
        unordered_set<int>st;
        for(int num : nums)
        {
            st.insert(num);
        }
        int i=0,j=0;
        int ans=0;
        unordered_map<int,int>mp;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            while(mp.size()==st.size())
            {
                ans+=nums.size()-j;
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                {
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};