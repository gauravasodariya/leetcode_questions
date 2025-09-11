class Solution {
public:
    string reverseVowels(string s) 
    {
        string vowel="aeiouAEIOU";
        vector<char>v;
        for(char c : s)
        {
            if(vowel.find(c)!=string::npos)
            {
                v.push_back(c);
            }
        }
        reverse(v.begin(),v.end());
        int index=0;
        for(char &c : s)
        {
            if(vowel.find(c)!=string::npos)
            {
                c=v[index++];
            }
        }
        return s;
    }
};