class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>word;
        stringstream ss(s);
        string token;
        int count=0;
        while(getline(ss,token,' ')){
            word.push_back(token);
            count++;
        }
        if(count!=pattern.size()){
            return false;
        }
        unordered_map<string,char>mp;
        set<char>st;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(word[i])==mp.end() && st.find(pattern[i])==st.end()){
                mp[word[i]]=pattern[i];
                st.insert(pattern[i]);
            }else if(mp[word[i]]!=pattern[i]){
                return false;
            }
        }
        return true;
    }
};
