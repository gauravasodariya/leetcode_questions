class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        for(int i=0;i<num.size();i++){
            while(!ans.empty() && ans.back()>num[i] && k>0){
                ans.pop_back();
                k--;
            }
            ans+=num[i];
        }
        while(k>0){
            ans.pop_back();
            k--;
        }
        int i=0;
        while(i<num.size() && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        return ans=="" ? "0" : ans;
    }
};