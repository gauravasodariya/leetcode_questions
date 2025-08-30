class Solution {
public:
    bool isValid(vector<vector<char>>& board,int startingRow,int endingRow,int startingCol,int endingCol)
    {
        unordered_set<char>st;
        for(int i=startingRow;i<=endingRow;i++)
        {
            for(int j=startingCol;j<=endingCol;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(st.find(board[i][j])!=st.end())
                {
                    return false;
                }
                else
                {
                    st.insert(board[i][j]);
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int row=board.size();
        int col=board[0].size();
        //check all rows
        for(int i=0;i<row;i++)
        {
            unordered_set<char>st;
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(st.find(board[i][j])!=st.end())
                {
                    return false;
                }
                else
                {
                    st.insert(board[i][j]);
                }
            }
        }
        //check all column
        for(int i=0;i<col;i++)
        {
            unordered_set<char>st;
            for(int j=0;j<row;j++)
            {
                if(board[j][i]=='.')
                {
                    continue;
                }
                if(st.find(board[j][i])!=st.end())
                {
                    return false;
                }
                else
                {
                    st.insert(board[j][i]);
                }
            }
        }  
        //check all 3*3 box
        for(int startingRow=0;startingRow<9;startingRow+=3)
        {
            int endingRow=startingRow+2;
            for(int startingCol=0;startingCol<9;startingCol+=3)
            {
                int endingCol=startingCol+2;
                if(!isValid(board,startingRow,endingRow,startingCol,endingCol))
                {
                    return false;
                }
            }
        }
        return true;
    }
};