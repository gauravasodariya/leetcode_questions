class Solution {
public:
    vector<int> findPeaks(vector<int>& nums) 
    {
        int i=1;
        vector<int>ans;
        while(i<nums.size()-1)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};