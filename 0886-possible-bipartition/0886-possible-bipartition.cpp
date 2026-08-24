class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n+1);
        for(int i=0;i<dislikes.size();i++){
            int u=dislikes[i][0];
            int v=dislikes[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int>q;
        vector<int>color(n+1,-1);
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                q.push(i);
                color[i]=0;
            }
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(int i=0;i<adj[node].size();i++){
                    if(color[adj[node][i]]==-1){
                        color[adj[node][i]]=(color[node]+1)%2;
                        q.push(adj[node][i]);
                    }
                    else{
                        if(color[node]==color[adj[node][i]]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};