class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int n=s.length();
        string st=s;
        if(s.length()!=goal.length())
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if((s+s).find(goal)!=string ::npos)
            {
                return true;
            }
        }
        return false;
    }
};