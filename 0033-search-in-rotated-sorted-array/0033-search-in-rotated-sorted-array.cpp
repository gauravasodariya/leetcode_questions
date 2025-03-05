class Solution {
public:
    int findPivot(vector<int>&nums,int n)
    {
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;  
            if(nums[mid]<nums[r])
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return r;
    }
    int binarySearch(int l,int r,vector<int>&nums,int target)
    {
        int index=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                index=mid;
                break;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return index;
    }
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int pivot_index=findPivot(nums,n);
        int index=binarySearch(0,pivot_index-1,nums,target);
        if(index!=-1)
        {
            return index;
        }
        index=binarySearch(pivot_index,n-1,nums,target);
        return index;
    }
};