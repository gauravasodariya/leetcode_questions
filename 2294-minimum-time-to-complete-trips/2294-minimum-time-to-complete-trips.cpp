class Solution {
public:
    int possible(vector<int>&time,long long givenTime,int totalTrips)
    {
        long long actualtrips = 0;
        for(int t : time)
        {
            actualtrips +=givenTime/t;
            if(actualtrips>=totalTrips)
            {
                return true;
            }
        }
        return false;
        
    }
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        int n=time.size();
        long long l = 1; // l = minimum time
        long long r = (long long)*min_element(begin(time),end(time))*totalTrips; //r = maximum time
        while(l<r)
        {
            long long mid_time=l+(r-l)/2;
            if(possible(time,mid_time,totalTrips))
            {
                r=mid_time;
            }
            else
            {
                l=mid_time+1;
            }
        }
        return l;
    }
};