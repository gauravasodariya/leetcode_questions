class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mp;
        for(int i=0;i<words.size();i++){
            for(char ch : words[i]){
                mp[ch]++;
            }
        }
        for(char i='a';i<='z';i++){
            if(mp[i]%words.size()!=0){
                return false;
            }
        }
        return true;
    }
};