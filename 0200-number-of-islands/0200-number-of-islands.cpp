class Solution {
public:
    int r,c;
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    bool valid(int i,int j){
        return i>=0&&i<r && j>=0&&j<c;
    }
    int numIslands(vector<vector<char>>& grid) {
        r=grid.size();
        c=grid[0].size();

        queue<pair<int,int>>q;
        int count=0;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push(make_pair(i,j));
                    grid[i][j]='0';
                    while(!q.empty()){
                        int ii=q.front().first;
                        int jj=q.front().second;
                        q.pop();

                        for(int k=0;k<4;k++){
                            if(valid(ii+row[k],jj+col[k])&& grid[ii+row[k]][jj+col[k]]=='1'){
                                grid[ii+row[k]][jj+col[k]]='0';
                                q.push(make_pair(ii+row[k],jj+col[k]));
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};