class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n=encodedText.size();
        if(n==0){
            return "";
        }
        int col=n/rows;
        string ans="";
        for(int i=0;i<col;i++){
            for(int j=0;j<rows;j++){
                if(i+j<col){
                    char ch=encodedText[j*col+(i+j)];
                    ans+=ch;
                }
            }
        }
        while(!ans.empty() && ans.back()==' '){
            ans.pop_back();
        }
        return ans;
    }
};