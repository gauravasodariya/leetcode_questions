class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>inDegree(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][1];
            int v=prerequisites[i][0];
            adj[u].push_back(v);
            inDegree[v]++;
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<inDegree.size();i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                inDegree[adj[node][i]]--;
                if(inDegree[adj[node][i]]==0){
                    q.push(adj[node][i]);
                }
            }
        }
        return ans.size()==numCourses;
    }
};