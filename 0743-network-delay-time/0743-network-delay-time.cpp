class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<times.size();i++){
            int u=times[i][0]-1;
            int v=times[i][1]-1;
            int weight=times[i][2];
            adj[u].push_back({v,weight});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>visited(n,0);
        vector<int>dist(n,INT_MAX);
        k=k-1;
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            int node=pq.top().second;
            pq.pop();
            if(visited[node]==1){
                continue;
            }
            visited[node]=true;
            for(int i=0;i<adj[node].size();i++){
                int neighbour=adj[node][i].first;
                int weight=adj[node][i].second;
                if(visited[neighbour]==0 && dist[neighbour]>dist[node]+weight){
                    dist[neighbour]=dist[node]+weight;
                    pq.push({dist[neighbour],neighbour});
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(dist[i]==INT_MAX){
                return -1;
            }
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};