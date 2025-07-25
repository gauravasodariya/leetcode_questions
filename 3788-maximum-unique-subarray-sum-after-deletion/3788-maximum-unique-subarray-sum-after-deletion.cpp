class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        unordered_set<int>st;
        int maxNeg=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=0)
            {
                maxNeg=max(maxNeg,nums[i]);
            }
            else if(!st.count(nums[i]))
            {
                sum+=nums[i];
                st.insert(nums[i]);
            }
        }
        return sum==0 ? maxNeg : sum;
    }
};