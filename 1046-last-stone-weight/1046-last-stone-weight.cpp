class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()>1){
            int n1=q.top();
            q.pop();
            int n2=q.top();
            q.pop();
            if(n1!=n2){
                q.push(n1-n2);
            }
        }
        if(q.size()==1){
            return q.top();
        }
        return 0;
    }
};