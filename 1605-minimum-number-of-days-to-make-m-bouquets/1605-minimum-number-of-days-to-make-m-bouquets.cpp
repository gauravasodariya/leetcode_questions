class Solution {
public:
    int canMakeMBouquet(vector<int>&bloomDay,int mid,int k)
    {
        int bouquetCount = 0;
        int consecutiveCount = 0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                consecutiveCount++;
            }
            else
            {
                consecutiveCount=0;
            }
            if(consecutiveCount==k)
            {
                bouquetCount++;
                consecutiveCount=0;
            }
        }
        return bouquetCount; 
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int n=bloomDay.size();
        int l=1;
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        int min_day=-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(canMakeMBouquet(bloomDay,mid,k)>=m)
            {
                min_day=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return min_day;
    }
};