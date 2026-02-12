class Solution {
public:
    bool isValid(vector<int>&freq){
        int common=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0){
                continue;
            }
            if(common==0){
                common=freq[i];
            }
            else if(common!=freq[i]){
                return false;
            }
        }
        return true;
    }
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                if(isValid(freq)){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};