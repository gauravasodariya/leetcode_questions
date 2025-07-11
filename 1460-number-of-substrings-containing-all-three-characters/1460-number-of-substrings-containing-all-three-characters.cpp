class Solution {
public:
    int numberOfSubstrings(string s) 
    {
         unordered_map<char,int>mp;
         int total=0;
         int n=s.size();
         int count=0;
         int start=0,end=0;
         while(end<n)
         {
            mp[s[end]]++;
            if(mp[s[end]]==1)
            {
                count++;
            }
            while(count==3)
            {
                total=total+n-end;
                mp[s[start]]--;
                if(mp[s[start]]==0)
                {
                    count--;
                }
                start++;
            }
            end++;
         }
         return total;
    }
};