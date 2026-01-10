class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n=s1.size();
        n=min(n,(int)s2.size());
        n=min(n,(int)s3.size());

        int total = s1.size()+s2.size()+s3.size();
        if(s1[0]!=s2[0] || s1[0]!=s3[0] || s2[0]!=s3[0]){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i] && s2[i]==s3[i]){
                total-=3;
            }
            else{
                break;
            }
        }
        return total;
    }
};