class Solution {
public:
    long long canEatAll(vector<int>&piles,int mid)
    {
        long long actual_hour=0;
        for(int &banana :piles)
        {
            actual_hour+=(int)ceil((double)banana/mid);
        }
        return actual_hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n=piles.size();
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2; // per hour eat mid number of banana
            if(canEatAll(piles,mid)<=h)
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