class Solution {
public:
    unordered_map<char,int> createMap(string chars){
        unordered_map<char,int>mp;
        for(int i=0;i<chars.size();i++){
            mp[chars[i]]++;
        }
        return mp;
    }
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>mp=createMap(chars);
            bool valid=true;
            for(char ch : words[i]){
                if(mp.find(ch)==mp.end()){
                    valid=false;
                    break;
                }
                else{
                    mp[ch]--;
                    if(mp[ch]==0){
                        mp.erase(ch);
                    }
                }
            }
            if(valid){
                count+=words[i].size();
            }
        }
        return count;
    }
};