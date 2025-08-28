class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) 
    {
        unordered_map<int,vector<int>>mp;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                mp[i-j].push_back(grid[i][j]);
            }
        }
        for(auto &it : mp)
        {
            sort(it.second.begin(),it.second.end());
            if(it.first>=0)
            {
                reverse(it.second.begin(),it.second.end());
            }
        }
        for(int i=row-1;i>=0;i--)
        {
            for(int j=col-1;j>=0;j--)
            {
                grid[i][j]=mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        return grid;
    }
};