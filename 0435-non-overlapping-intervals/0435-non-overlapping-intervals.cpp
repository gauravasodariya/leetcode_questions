class Solution {
public:
    static bool comp(vector<int>a,vector<int>b)
    {
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end(),comp);
        int ans=0;
        int endingTime=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>=endingTime)
            {
                endingTime=intervals[i][1];
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};