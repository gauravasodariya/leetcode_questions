class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) 
    {
        int count=0;
        int prev=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i]-k;
            if(prev<num)
            {
                prev=num;
                count++;
            }
            else
            {
                if((prev+1)<=nums[i]+k)
                {
                    prev=prev+1;
                    count++;
                }
            }
        }
        return count;
    }
};