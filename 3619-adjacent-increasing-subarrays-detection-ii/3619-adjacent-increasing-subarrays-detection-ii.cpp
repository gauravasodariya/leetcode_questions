class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) 
    {
        int currRun=1;
        int prevRun=0;
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                currRun++;
            }
            else
            {
                prevRun=currRun;
                currRun=1;
            }
            ans=max(currRun/2,ans);
            ans=max(ans,min(currRun,prevRun));
        }
        return ans;
    }
};