class Solution {
public:
    bool isAnagram(string word,string vec)
    {
        sort(word.begin(),word.end());
        sort(vec.begin(),vec.end());
        return word==vec;
    }
    vector<string> removeAnagrams(vector<string>& words) 
    {
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++)
        {
            if(!isAnagram(words[i],ans.back()))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};