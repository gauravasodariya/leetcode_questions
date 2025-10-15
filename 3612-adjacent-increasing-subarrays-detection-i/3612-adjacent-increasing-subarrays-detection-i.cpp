class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) 
    {
        int currRun=1;
        int prevRun=0;
        int maxResult=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                currRun++;
            }
            else{
                prevRun=currRun;
                currRun=1;
            }
            if(min(currRun,prevRun)>=k)
            {
                return true;
            }
            if((currRun/2)>=k)
            {
                return true;
            }
        }
        return false;
    }
};