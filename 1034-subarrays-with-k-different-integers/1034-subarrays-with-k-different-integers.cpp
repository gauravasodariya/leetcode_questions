class Solution {
public:
    int atLeast(vector<int>&nums,int k)
    {
        unordered_map<int,int>mp;
        int total=0;
        int start=0,end=0,count=0;
        int n=nums.size();
        while(end<n)
        {
            mp[nums[end]]++;
            if(mp[nums[end]]==1)
            {
                count++;
            }
            while(count==k)
            {
                total=total+n-end;
                mp[nums[start]]--;
                if(mp[nums[start]]==0)
                {
                    count--;
                }
                start++;
            }
            end++;
        }
        return total;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        int ans1=atLeast(nums,k);
        int ans2=atLeast(nums,k+1);
        return ans1-ans2;
    }
};