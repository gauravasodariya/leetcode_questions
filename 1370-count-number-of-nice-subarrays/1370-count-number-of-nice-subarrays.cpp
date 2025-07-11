class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=0;
            }
        }
        unordered_map<int,int>mp;
        mp.insert({0,1});
        int total=0;
        int i=0,sum=0;
        int n=nums.size();
        while(i<n)
        {
            sum=sum+nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                total=total+mp[sum-k];
            }
            mp[sum]++;
            i++;
        }
        return total;
    }
};