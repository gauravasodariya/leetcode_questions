class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q;
        for(int i=0;i<piles.size();i++){
            q.push(piles[i]);
        }
        while(k--){
            int n1=q.top();
            q.pop();    
            q.push(n1-n1/2);
        }
        int total=0;
        while(!q.empty()){
            total+=q.top();
            q.pop();
        }
        return total;
    }
};