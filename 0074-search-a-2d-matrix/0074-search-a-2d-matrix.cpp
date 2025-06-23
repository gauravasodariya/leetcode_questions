class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        for (int i = 0; i < r; i++) 
        {
            if (matrix[i][0] <= target && target <= matrix[i][c - 1])
             {
                int start = 0, end = c;
                while (start <= end) 
                {
                    int mid = (start + end) / 2;
                    if (matrix[i][mid] == target)
                    {
                        return true;
                    } 
                    else if (matrix[i][mid] > target)
                    {
                        end = mid - 1;
                    } 
                    else 
                    {
                        start = mid + 1;
                    }
                }
            }
        }
        return false;
    }
}
;
