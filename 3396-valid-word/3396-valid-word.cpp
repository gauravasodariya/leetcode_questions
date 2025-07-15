class Solution {
public:
    bool isValid(string word) 
    {
        bool vowel=false;
        bool consonant=false;
        if(word.size()<3)
        {
            return false;
        }
        for(int i=0;i<word.size();i++)
        {
            char ch=tolower(word[i]);
            if(isalpha(word[i]))
            {
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                {
                    vowel=true;
                }
                else 
                {
                    consonant=true;
                }
            }
            else if(!isdigit(ch))
            {
                return false;
            }
        }
        return vowel && consonant;
    }
};