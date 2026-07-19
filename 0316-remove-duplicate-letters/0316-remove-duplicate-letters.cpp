class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>taken(26,false);
        vector<int>lastIndex(26);
        for(int i=0;i<s.size();i++){
            lastIndex[s[i]-'a']=i;
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(taken[s[i]-'a']==true){
                continue;
            }
            while(!ans.empty() && ans.back()>s[i] && lastIndex[ans.back()-'a']>i){
                taken[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans+=s[i];
            taken[s[i]-'a']=true;
        }
        return ans;
    }
};