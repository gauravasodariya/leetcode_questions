class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int neg;
        int pos;
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]>0)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        pos=nums.size()-start;
        start=0;
        end=nums.size()-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]<0)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        neg=end+1;
        return max(pos,neg);
    }
};