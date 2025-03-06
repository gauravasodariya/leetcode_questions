class Solution {
public:
    bool canEatAll(vector<int>&piles,int time,int speed)
    {
        for(int &banana :piles)
        {
            time=time-ceil(banana/double(speed));
        }
        if(time>=0)
        {
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n=piles.size();
        int r=*max_element(piles.begin(),piles.end());
        int l=1;
        int ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2; // per hour eat mid number of banana
            if(canEatAll(piles,h,mid))
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