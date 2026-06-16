class Solution {
public:
    string removeStars(string s) {
        string ans="";
        for(char ch : s){
            if(islower(ch)){
                ans+=ch;
            }
            else{
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};