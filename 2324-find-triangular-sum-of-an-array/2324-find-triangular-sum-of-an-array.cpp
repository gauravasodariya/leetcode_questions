class Solution {
public:
    int triangularSum(vector<int>& nums)
    {
        vector<int>tmp;
        while(nums.size()>1)
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                tmp.push_back((nums[i]+nums[i+1])%10);       
            }
            nums=move(tmp);
        } 
        return nums[0];
    }
};