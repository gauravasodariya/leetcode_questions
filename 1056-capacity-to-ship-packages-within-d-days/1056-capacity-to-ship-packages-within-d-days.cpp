class Solution {
public:
    int findDays(vector<int>&weights,int mid)
    {
        int count=1;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            if(sum>mid)
            {
                count++;
                sum=weights[i];
            }
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int l=*(max_element(weights.begin(),weights.end()));
        int r=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;

        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(findDays(weights,mid)<=days)
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