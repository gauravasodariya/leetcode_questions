class Solution {
public:
    int r,c;
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    bool valid(int i,int j){
        return i>=0&&i<r && j>=0&&j<c;
    }
    void solve(vector<vector<char>>& board) {
        r=board.size();
        c=board[0].size();

        //apply BFS operation from border where 0  is present.
        //replace 0 with t.
        queue<pair<int,int>>q;

        //first row
        for(int j=0;j<c;j++){
            if(board[0][j]=='O'){
                q.push(make_pair(0,j));
                board[0][j]='t';
            }
        }
        //first column
        for(int i=1;i<r;i++){
            if(board[i][0]=='O'){
                q.push(make_pair(i,0));
                board[i][0]='t';
            }
        }
        //last row
        for(int j=1;j<c;j++){
                if(board[r-1][j]=='O'){
                    q.push(make_pair(r-1,j));
                    board[r-1][j]='t';
                }
        }
        //last column
        for(int i=1;i<r-1;i++){
            if(board[i][c-1]=='O'){
                q.push(make_pair(i,c-1));
                board[i][c-1]='t';
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                if(valid(i+row[k],j+col[k]) && board[i+row[k]][j+col[k]]=='O'){
                    board[i+row[k]][j+col[k]]='t';
                    q.push(make_pair(i+row[k],j+col[k]));
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='t'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};