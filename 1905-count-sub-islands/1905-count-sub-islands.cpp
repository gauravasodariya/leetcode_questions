class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    int r,c;
    bool valid(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        r=grid1.size();
        c=grid1[0].size();
        queue<pair<int,int>>q;
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid2[i][j]==1){
                    bool flag=true;
                    q.push(make_pair(i,j));
                    grid2[i][j]=0;
                    while(!q.empty()){
                        int new_i=q.front().first;
                        int new_j=q.front().second;
                        q.pop();
                        if(grid1[new_i][new_j]==0){
                            flag=false;
                        }
                        for(int k=0;k<4;k++){
                            if(valid(new_i+row[k],new_j+col[k]) && grid2[new_i+row[k]][new_j+col[k]]==1){
                                grid2[new_i+row[k]][new_j+col[k]]=0;
                                q.push(make_pair(new_i+row[k],new_j+col[k]));
                            }
                        }
                    }
                    if(flag){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};