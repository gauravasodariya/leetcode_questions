class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int i=0,j=0;
        int ans=0;
        int lastIndex=-1;
        while(j<nums.size())
        {
            if(nums[j]==0)
            {
                i=lastIndex+1;
                lastIndex=j;
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};