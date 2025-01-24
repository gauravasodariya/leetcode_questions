class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k<=1)
        {
            return 0;
        }
        int i=0,j=0;
        int count=0,prod=1;
        while(j<nums.size())
        {
            prod=prod*nums[j];
            while(prod>=k)
            {
                prod=prod/nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;
        }    
        return count;
    }
};