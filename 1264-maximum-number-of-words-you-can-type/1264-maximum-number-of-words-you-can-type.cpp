class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        unordered_set<char>st(brokenLetters.begin(),brokenLetters.end());
        int count=0;
        bool valid=true;
        for(char c : text)
        {
            if(c==' ')
            {
                if(valid)
                {
                    count++;
                }
                //reset valid to check next word
                valid=true;
            }
            else if(st.count(c))
            {
                valid=false;
            }
        }
        //check for the last word
        if(valid)
        {
            count++;
        }
        return count;
    }
};