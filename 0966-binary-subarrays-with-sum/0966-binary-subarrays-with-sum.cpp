class Solution {
public:
    int atLeast(vector<int>&nums,int k)
    {
        int start=0,end=0;
        int n=nums.size();
        int sum=0,ans=0;
        while(end<n)
        {
            sum=sum+nums[end];
            while(sum>=k && start<=end)
            {
                ans=ans+n-end;
                sum=sum-nums[start];
                start++;
            }
            end++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int total1=atLeast(nums,goal);
        int total2=atLeast(nums,goal+1);
        return total1-total2;
    }
};