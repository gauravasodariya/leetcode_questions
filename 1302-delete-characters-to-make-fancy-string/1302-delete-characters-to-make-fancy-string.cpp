class Solution {
public:
    string makeFancyString(string s) 
    {
        string ans="";
        int count=0;
        char last=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==last)
            {
                count++;
                if(count<3)
                {
                    ans+=s[i];
                }
            }
            else
            {
                last=s[i];
                count=1;
                ans+=s[i];
            }
        }
        return ans;
    }
};