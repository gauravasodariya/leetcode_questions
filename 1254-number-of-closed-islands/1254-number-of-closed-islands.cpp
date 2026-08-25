class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    int r,c;
    bool valid(int i,int j){
        return i>=0 && i<r && j>=0 &&j<c;
    }
    int closedIsland(vector<vector<int>>& grid) {
        r=grid.size();
        c=grid[0].size();
        queue<pair<int,int>>q;
        for(int j=0;j<c;j++){
            if(grid[0][j]==0){
                q.push(make_pair(0,j));
                grid[0][j]=1;
            }
        }
        for(int i=1;i<r;i++){
            if(grid[i][0]==0){
                q.push(make_pair(i,0));
                grid[i][0]=1;
            }
        }
        for(int j=1;j<c;j++){
            if(grid[r-1][j]==0){
                q.push(make_pair(r-1,j));
                grid[r-1][j]=1;
            }

        }
        for(int i=1;i<r-1;i++){
            if(grid[i][c-1]==0){
                q.push(make_pair(i,c-1));
                grid[i][c-1]=1;
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                if(valid(i+row[k],j+col[k]) && grid[i+row[k]][j+col[k]]==0){
                    grid[i+row[k]][j+col[k]]=1;
                    q.push(make_pair(i+row[k],j+col[k]));
                }
            }
        }
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0){
                    count++;
                    q.push(make_pair(i,j));
                    grid[i][j]=1;
                    while(!q.empty()){
                        int i=q.front().first;
                        int j=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            if(valid(i+row[k],j+col[k]) && grid[i+row[k]][j+col[k]]==0){
                                grid[i+row[k]][j+col[k]]=1;
                                q.push(make_pair(i+row[k],j+col[k]));
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};