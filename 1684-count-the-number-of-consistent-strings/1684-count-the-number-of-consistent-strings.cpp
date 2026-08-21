class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st;
        for(int i=0;i<allowed.size();i++){
            st.insert(allowed[i]);
        }
        int count=0;
        for(string word : words){
            bool valid=true;
            for(char ch : word){
                if(!st.count(ch)){
                    valid=false;
                    break;
                }
            }
            if(valid){
                count++;
            }
        }
        return count;
    }
};