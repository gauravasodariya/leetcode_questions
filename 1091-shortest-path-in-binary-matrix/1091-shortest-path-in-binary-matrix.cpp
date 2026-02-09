class Solution {
public:
    int r[8]={-1,1,0,0,1,-1,-1,1};
    int c[8]={0,0,-1,1,1,-1,1,-1};
    bool valid(int i,int j,int row,int col){
        return i>=0&&i<row && j>=0&&j<col;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int row=grid.size();
        int col=grid[0].size();
        if(row==1 && col==1){
            return grid[0][0]==0 ? 1:-1;
        }
        if(grid[0][0]==1 || grid[row-1][col-1]==1){
            return -1;
        }
        q.push({0,0});
        grid[0][0]=1;
        int steps=1;
        while(!q.empty()){
            int count=q.size();
            while(count--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                for(int k=0;k<8;k++){
                if(valid(i+r[k],j+c[k],row,col) && grid[i+r[k]][j+c[k]]==0){
                    if(i+r[k]==row-1 && j+c[k]==col-1){
                        return steps+1; 
                    }
                    grid[i+r[k]][j+c[k]]=1;
                    q.push({i+r[k],j+c[k]});
                }
            }
        }
        steps+=1;
    }
    return -1;
    }
};