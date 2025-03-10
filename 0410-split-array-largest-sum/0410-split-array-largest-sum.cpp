class Solution {
public:
    int countSubarray(vector<int>&nums,int mid)
    {
        int partition = 1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>mid)
            {
                partition++;
                sum=nums[i];
            }
        }
        return partition; 
    }
    int splitArray(vector<int>& nums, int k) 
    {
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;

        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(countSubarray(nums,mid)<=k)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;    
    }
};