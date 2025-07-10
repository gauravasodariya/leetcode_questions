class Solution {
public:
    string minWindow(string s, string t) 
    {
        int i=0;
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]++;
        }    
        int start=0,end=0;
        int ans=INT_MAX;
        int total=t.size();
        int index=-1;
        while(end<s.size())
        {
            mp[s[end]]--;
            if(mp[s[end]]>=0)
            {
                total--;
            }
            while(total==0 && start<=end)
            {
                mp[s[start]]++;
                if(ans>end-start+1)
                {
                    ans=end-start+1;
                    index=start;
                }
                if(mp[s[start]]>0)
                {
                    total++;
                }
                start++;
            }
            end++;
        }
        if(index==-1)
        {
            return "";
        }
        string final="";
        for(int i=index;i<index+ans;i++)
        {
            final=final+s[i];
        }
        return final;
    }
};