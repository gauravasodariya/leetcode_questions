class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>q;
        for(int i=0;i<gifts.size();i++){
            q.push(gifts[i]);
        }
        while(k--){
            int num=q.top();
            q.pop();
            q.push(sqrt(num));
        }
        long long total=0;
        while(!q.empty()){
            total+=q.top();
            q.pop();
        }
        return total;
    }
};