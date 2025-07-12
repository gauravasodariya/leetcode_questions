class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) 
    {
        int n=tasks.size();
        for(int i=0;i<n;i++)
        {
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        long long timer=tasks[0][0];
        int i=0;
        vector<int>ans;
        while(i<n || !pq.empty())
        {
            while(i<n && tasks[i][0]<=timer)
            {
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            if(pq.empty())
            {
                timer=tasks[i][0];
            }
            else
            {
                ans.push_back(pq.top().second);
                timer+=pq.top().first;
                pq.pop();
            }
        }
        return ans;
    }
};