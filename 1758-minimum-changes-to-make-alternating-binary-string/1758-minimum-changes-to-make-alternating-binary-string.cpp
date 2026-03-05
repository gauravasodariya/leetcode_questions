class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int startOne=0;
        int startZero=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]=='0'){
                    startOne++;
                }
                else{
                    startZero++;
                }
            }
            else{
                if(s[i]=='0'){
                    startZero++;
                }
                else{
                    startOne++;
                }
            }
        }
        return min(startOne,startZero);
    }
};