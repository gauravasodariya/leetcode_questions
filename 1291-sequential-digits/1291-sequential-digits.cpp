class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        for(int i=1;i<=8;i++){
            q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int tmp=q.front();
            q.pop();
            if(tmp>high){
                break;
            }
            if(tmp>=low && tmp<=high){
                ans.push_back(tmp);
            }
            int lastDigit=tmp%10;
            if(lastDigit+1<=9){
                q.push(tmp*10+lastDigit+1);
            }
        }
        return ans;
    }
};