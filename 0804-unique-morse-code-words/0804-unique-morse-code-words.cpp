class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>pattern={
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
            "....", "..", ".---", "-.-", ".-..", "--", "-.",
            "---", ".--.", "--.-", ".-.", "...", "-", "..-",
            "...-", ".--", "-..-", "-.--", "--.."
        };
        set<string>st;
        for(string word : words){
            string tmp;
            for(char ch : word){
                tmp+=pattern[ch-'a'];
            }
            st.insert(tmp);
        }
        return st.size();
    }
};