class Solution {
public:
    int countPrimes(int n) 
    {
        vector<int>ans(n,1);
        for(int i=2;i<=(int)sqrt(n);i++)
        {
            if(ans[i]==1)
            {
                for(int j=i*i;j<n;j=j+i)
                {
                    ans[j]=0;
                }
            }
        }
        int count=0;
        for(int i=2;i<ans.size();i++)
        {
            if(ans[i]==1)
            {
                count++;
            }
        }
        return count;
    }
};