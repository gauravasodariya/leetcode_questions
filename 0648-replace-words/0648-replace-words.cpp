class Solution {
public:
    string findRoot(string &word,unordered_set<string>&st)
    {
        for(int i=1;i<word.length();i++)
        {
            string root=word.substr(0,i);
            {
                if(st.count(root))
                {
                    return root;
                }
            }
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) 
    {
        unordered_set<string>st(dictionary.begin(),dictionary.end());
        string ans;
        stringstream ss(sentence);
        string word;
        while(getline(ss,word,' '))
        {
            ans+=findRoot(word,st)+' ';
        }
        ans.pop_back();
        return ans;  
    }
};