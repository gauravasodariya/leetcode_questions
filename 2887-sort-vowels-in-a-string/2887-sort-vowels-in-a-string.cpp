class Solution {
public:
    string sortVowels(string s) 
    {
        vector<char>vowel;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            { 
                vowel.push_back(s[i]);
            }
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(),vowel.end());
        int index=0;
        for(char &c : s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                c=vowel[index++];
            }
        }
        return s;
    }
};