class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int l=0,r=arr.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            //how many missing number till mid
            if((arr[mid]-(mid+1))<k)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }    
        return l+k;
    }
};