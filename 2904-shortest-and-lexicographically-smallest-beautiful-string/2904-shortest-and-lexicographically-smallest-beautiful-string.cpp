class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int i=0,j=0;
        int countOne=0;
        while(j<s.size()){
            if(s[j]=='1'){
                countOne++;
            }
            while(countOne>k || s[i]=='0'){
                if(s[i]=='1'){
                    countOne--;
                }
                i++;
            }
            if(countOne==k){
                string tmp=s.substr(i,j-i+1);
                if(ans.empty() || tmp.size()<ans.size() || tmp.size()==ans.size() && tmp<ans){
                    ans=tmp;
                }
            }
            j++;
        }
        return ans;
    }
};