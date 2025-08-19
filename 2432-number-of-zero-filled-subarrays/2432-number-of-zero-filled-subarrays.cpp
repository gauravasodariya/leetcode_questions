class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long ans=0;
        int i=0;
        while(i<nums.size())
        {
            long long n=0;
            if(nums[i]==0)
            {
                while(i<nums.size() && nums[i]==0)
                {
                    i++;
                    n++;
                }
            }
            else
            {
                i++;
            }
            ans+=n*(n+1)/2; //formula for calculate how many we get subarray from length n
        }
        return ans;
    }
};