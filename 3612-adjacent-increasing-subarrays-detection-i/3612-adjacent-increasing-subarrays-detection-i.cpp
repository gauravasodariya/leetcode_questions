class Solution {
public:
    bool isIncreasing(vector<int>&nums,int start,int end)
    {
        for(int i=start+1;i<end;i++)
        {
            if(nums[i]<=nums[i-1])
            {
                return false;
            }
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) 
    {
        for(int start=0;start+2*k<=nums.size();start++)
        {
            bool first=isIncreasing(nums,start,start+k);
            bool second=isIncreasing(nums,start+k,start+2*k);
            if(first==true && second==true)
            {
                return true;
            }
        }
        return false;
    }
};