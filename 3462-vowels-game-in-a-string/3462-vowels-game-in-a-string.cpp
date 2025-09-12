class Solution {
public:
    bool doesAliceWin(string s) 
    {
        string vowel="aeiou";
        for(char c : s)
        {
            if(vowel.find(c)!=string::npos)
            {
                return true;
            }
        }
        return false;
    }
};