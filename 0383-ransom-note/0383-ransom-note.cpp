class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(char ch : ransomNote){
            if(mp[ch]==0){
                return false;
            }
            else{
                mp[ch]--;
            }
        }
        return true;
    }
};