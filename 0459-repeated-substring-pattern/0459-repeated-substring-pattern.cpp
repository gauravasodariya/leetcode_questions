class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        string doubleString=s+s;
        string trim=doubleString.substr(1,doubleString.length()-2);
        if(trim.find(s)!=string::npos)
        {
            return true;
        }   
        return false;
    }
};