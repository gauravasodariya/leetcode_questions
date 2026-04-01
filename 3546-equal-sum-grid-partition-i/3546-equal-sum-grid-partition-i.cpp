class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<long long>row(m,0);
        vector<long long>col(n,0);
        long total=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                total+=grid[i][j];
                row[i]+=grid[i][j];
                col[j]+=grid[i][j];
            }
        }
        if(total%2!=0){
            return false;
        }
        long long upper=0;
        for(int i=0;i<m-1;i++){
            upper+=row[i];
            if(upper==total-upper){
                return true;
            }
        }
        long long left=0;
        for(int i=0;i<n-1;i++){
            left+=col[i];
            if(left==total-left){
                return true;
            }
        }
        return false;
    }
};