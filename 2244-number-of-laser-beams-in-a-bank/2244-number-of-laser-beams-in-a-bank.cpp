class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prevCount=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int currCount=0;
            for(char &ch : bank[i]){
                if(ch=='1'){
                    currCount++;
                }
            }
            ans+=currCount*prevCount;
            prevCount=currCount==0 ? prevCount : currCount;
        }
        return ans;
    }
};