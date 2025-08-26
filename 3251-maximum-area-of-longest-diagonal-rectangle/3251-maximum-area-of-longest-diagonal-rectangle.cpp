class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& mat) 
    {
        int maxDiagonal=0;
        int maxArea=0;
        for(int i=0;i<mat.size();i++)
        {
            int length=mat[i][0];
            int width=mat[i][1];
            int diag=(length*length)+(width*width);
            int area=length*width;
            if(diag>maxDiagonal)
            {
                maxDiagonal=diag;
                maxArea=area;
            }
            else if(diag==maxDiagonal)
            {
                maxArea=max(maxArea,area);
            }
        }        
        return maxArea;
    }
};