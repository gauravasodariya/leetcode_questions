class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string ans="";
        string word="";
        int count=1;
        while(ss>>word){
            char ch=word[0];
            if(ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' ||ch == 'U'){
                word+="ma";
              }
              else{
                word=word.substr(1)+word[0]+"ma";
              }
              word+=string(count,'a');
              if(!ans.empty()){
                ans+=' ';
              }
              ans+=word;
              count++;
        }
        return ans;
    }
};