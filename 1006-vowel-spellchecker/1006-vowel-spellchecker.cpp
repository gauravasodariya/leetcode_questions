class Solution {
public:
    string toLower(string s)
    {
        string ans;
        for(char c : s)
        {
            ans+=tolower(c);
        }
        return ans;
    }
    string replaceVowel(string s)
    {
        string ans;
        for(char c : s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                ans+='*';
            }
            else 
            {
                ans+=c;
            }
        }
        return ans;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries)    
    {
        unordered_set<string>exactSt;
        unordered_map<string,string>caseMp;
        unordered_map<string,string>vowelMp;
        //build map and set
        for(string word : wordlist)
        {
            exactSt.insert(word);
            string lower=toLower(word); 
            if(!caseMp.count(lower))
            {
                caseMp[lower]=word;
            }
            string vowelCase=replaceVowel(lower);
            if(!vowelMp.count(vowelCase))
            {
                vowelMp[vowelCase]=word;
            }
        }
        vector<string>ans;
        for(string query : queries)
        {
            if(exactSt.count(query))
            {
                ans.push_back(query);
            }
            else if(caseMp.count(toLower(query)))
            {
                ans.push_back(caseMp[toLower(query)]);
            }
            else
            {
                string q=toLower(query);
                if(vowelMp.count(replaceVowel(q)))
                {
                    ans.push_back(vowelMp[replaceVowel(q)]);
                }
                else
                {
                    ans.push_back("");
                }
            }
        }
        return ans;
    }
};