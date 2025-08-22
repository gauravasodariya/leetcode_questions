class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) 
    {
         int row=grid.size();
         int col=grid[0].size();
         int minRow=row;
         int maxRow=-1;
         int minCol=col;
         int maxCol=-1;
         for(int i=0;i<row;i++)
         {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    minRow=min(minRow,i);
                    maxRow=max(maxRow,i);
                    minCol=min(minCol,j);
                    maxCol=max(maxCol,j);
                }
            }
         }
         return (maxRow-minRow+1)*(maxCol-minCol+1);
    }
};