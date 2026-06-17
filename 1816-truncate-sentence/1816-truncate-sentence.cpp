class Solution {
public:
    string truncateSentence(string s, int k) {
        string tmp="";
        string ans="";
        int count=1;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                tmp+=s[i];
            }
            else{
                if(count<=k){
                    ans+=tmp;
                    ans+=' ';
                    tmp="";
                }
                count++;
            }
        }
        if(count<=k){
            ans+=tmp;
        }
        else{
            ans.pop_back();
        }
        return ans;
    }
};