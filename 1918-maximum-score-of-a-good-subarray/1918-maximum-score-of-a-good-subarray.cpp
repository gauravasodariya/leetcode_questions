class Solution {
public:
    int maximumScore(vector<int>& nums, int k) 
    {
        int left=k;
        int right=k;
        int minValue=nums[k];
        int ans=minValue;
        while(left>0 || right<nums.size()-1)
        {
            if(left==0)
            {
                right++;
            }
            else if(right==nums.size()-1)
            {
                left--;
            }
            else if(nums[left-1]>=nums[right+1])
            {
                left--;
            }
            else 
            {
                right++;
            }
            minValue=min(minValue,min(nums[left],nums[right]));
            ans=max(ans,minValue*(right-left+1));
        }
        return ans;
    }
};