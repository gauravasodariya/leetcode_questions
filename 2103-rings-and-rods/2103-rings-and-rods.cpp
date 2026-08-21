class Solution {
public:
    int countPoints(string rings) {
        vector<int>r(10,0);
        vector<int>g(10,0);
        vector<int>b(10,0);
        for(int i=0;i<rings.size();i+=2){
            char color=rings[i];
            int road=rings[i+1]-'0';
            if(color=='R'){
                r[road]=1;
            }
            else if(color=='G'){
                g[road]=1;
            }
            else{
                b[road]=1;
            }
        }
        int count=0;
        for(int i=0;i<10;i++){
            if(r[i]==1 && g[i]==1 && b[i]==1){
                count++;
            }
        }
        return count;
    }
};