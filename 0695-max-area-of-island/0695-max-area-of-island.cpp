class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    int r,c;
    bool valid(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int ans=0;
        int count=0;
        r=grid.size();
        c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    count=1;
                    q.push(make_pair(i,j));
                    grid[i][j]=0;

                    while(!q.empty()){
                        int new_i=q.front().first;
                        int new_j=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            if(valid(new_i+row[k],new_j+col[k]) && grid[new_i+row[k]][new_j+col[k]]==1){
                                q.push(pair(new_i+row[k],new_j+col[k]));
                                count++;
                                grid[new_i+row[k]][new_j+col[k]]=0;
                            }
                        }
                    }
                    ans=max(ans,count);
                }
            }
        }
        return ans;
    }
};