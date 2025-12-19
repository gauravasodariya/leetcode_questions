class Solution {
public:
    bool isValid(string code){
        if(code.empty()){
            return false;
        }
        for(auto ch : code){
            if(!isalnum(ch) && ch!='_'){
                return false;
            }
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) 
    {
        unordered_map<string,int>mp = {
            {"electronics",0},
            {"grocery",1},
            {"pharmacy",2},
            {"restaurant",3}
        };
        vector<pair<int,string>>tmp;
        for(int i=0;i<code.size();i++){
            if(isActive[i] && mp.count(businessLine[i]) && isValid(code[i])){
                tmp.push_back({mp[businessLine[i]],code[i]});
            }
        }
        sort(tmp.begin(),tmp.end());
        vector<string>ans;
        for(auto it : tmp){
            ans.push_back(it.second);
        }
        return ans;
    }
};