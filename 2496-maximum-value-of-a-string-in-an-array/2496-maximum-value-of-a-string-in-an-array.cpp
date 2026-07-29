class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for(string s : strs){
            bool isNumber=true;
            for(char ch : s){
                if(!isdigit(ch)){
                    isNumber=false;
                    break;
                }
            }
            if(isNumber){
                ans=max(ans,stoi(s));
            }
            else{
                ans=max(ans,(int)s.size());
            }
        }
        return ans;
    }
};