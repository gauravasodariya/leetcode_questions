class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int ans=-1;
        int minElement=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>minElement)
            {
                ans=max(ans,nums[i]-minElement);
            }
            else
            {
                minElement=nums[i];
            }
        }
        return ans;
    }
};