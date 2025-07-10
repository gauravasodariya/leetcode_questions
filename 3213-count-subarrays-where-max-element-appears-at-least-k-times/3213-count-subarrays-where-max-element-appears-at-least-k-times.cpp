class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        int maxElement=*max_element(nums.begin(),nums.end());
        int start=0,end=0;
        int n=nums.size();
        long long total=0;
        int count=0;
        while(end<n)    
        {
            if(nums[end]==maxElement)
            {
                count++;
            }
            while(count==k)
            {
                total+=n-end;
                if(nums[start]==maxElement)
                {
                    count--;
                }
                start++;
            }
            end++;
        }
        return total;
    }
};