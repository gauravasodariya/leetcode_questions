class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                tmp+=s[i];
            }
            else{
                if(!tmp.empty()){
                    reverse(tmp.begin(),tmp.end());
                    ans+=tmp;
                    ans+=' ';
                    tmp="";
                }
            }
        }
        if(!tmp.empty()){
            reverse(tmp.begin(),tmp.end());
            ans+=tmp;
        }
        return ans;
    }
};