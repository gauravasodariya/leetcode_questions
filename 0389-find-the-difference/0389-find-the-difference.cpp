class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            //When you check mp['e'], since 'e' was not stored, it gets automatically inserted with value 0
            mp[t[i]]--;
            if(mp[t[i]]<0)
            {
                return t[i];
            }
        }
        return t[0];
    }
};