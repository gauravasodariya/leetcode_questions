class Solution {
public:
    int canDistribute(vector<int>position,int mid)
    {
        int count=1;
        int distance=0;
        int start=position[0];
        for(int i=1;i<position.size();i++)
        {
            if((start+mid)<=position[i])
            {
                count++;
                start=position[i];
            }
        }
        return count;
    }
    int maxDistance(vector<int>& position, int m) 
    {
        sort(position.begin(),position.end());
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<position.size();i++)
        {
            mini=min(mini,position[i]);
            maxi=max(maxi,position[i]);
        }
        int l=1;
        int r=maxi-mini;
        int ans=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(canDistribute(position,mid)>=m)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return ans;
    }
};