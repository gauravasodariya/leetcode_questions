class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        int ans=0;
        int i=0,j=0;
        while(j<nums.size()-1)
        {
            if((nums[j]>nums[i] && nums[j+1]<nums[j]) 
              ||(nums[j]<nums[i] && nums[j+1]>nums[j]))
              {
                ans++;
                i=j;
              }
              j++;
        }
        return ans;
    }
};