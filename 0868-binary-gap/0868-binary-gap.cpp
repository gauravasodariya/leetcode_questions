class Solution {
public:
    int binaryGap(int n) {
        int prev=-1;
        int ans=0;
        for(int i=0;i<32;i++){
            if(((n >> i) & 1) > 0){
                ans=(prev!=-1) ? max(ans,i-prev) : ans;
                prev = i;
            }
        }
        return ans;
    }
};