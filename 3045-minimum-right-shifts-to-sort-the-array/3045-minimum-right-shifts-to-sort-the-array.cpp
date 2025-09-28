class Solution {
public:
    int minimumRightShifts(vector<int>& nums) 
    {
        int n=nums.size();
        int breakCount=0; 
        int pivot=-1;     
        for(int i=0;i<n-1;i++) 
        {
            if(nums[i]>nums[i+1]) 
            {
                breakCount++;
                pivot=i;
            }
        }
        if(breakCount==0) 
        {
            return 0;
        }
        if(breakCount>1) 
        {
            return -1;
        }
        if(nums[n-1]>nums[0]) 
        {
            return -1;
        }
        return n-(pivot+1);
    }
};
