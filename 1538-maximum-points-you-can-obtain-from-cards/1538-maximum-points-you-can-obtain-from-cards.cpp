class Solution {
public:
    int maxScore(vector<int>& nums, int k) 
    {
        int leftSum=0;
        int rightSum=0;
        int left=0;
        int right=nums.size()-1;
        int ans=0;
        while(left<k)
        {
            leftSum+=nums[left];
            left++;
        }
        ans=leftSum;
        left--;
        while(left>=0)
        {
            leftSum-=nums[left];
            rightSum+=nums[right];
            left--;
            right--;
            ans=max(ans,leftSum+rightSum);
        }
        return ans;
    }
};