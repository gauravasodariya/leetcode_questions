class Solution {
public:
    int findDivisor(vector<int>&nums,int mid)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            // sum += ceil((double)(nums[i])/(double)(mid));
            equilavent:sum+=(nums[i]+mid-1)/mid;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int l=1,ans=-1;
        int r=*max_element(nums.begin(),nums.end());
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(findDivisor(nums,mid)<=threshold)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};