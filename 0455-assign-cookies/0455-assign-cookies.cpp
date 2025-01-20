class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m=g.size();
        int n=s.size();
        int i=0,j=0;
        int count=0;
        while(i<m && j<n)
        {
            if(g[i]<=s[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }    
        return count;
    }
};