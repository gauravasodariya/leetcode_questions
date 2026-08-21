class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int freq=mp[s[0]];
        for(int i=0;i<s.size();i++){
            if(freq!=mp[s[i]]){
                return false;
            }
        }
        return true;
    }
};