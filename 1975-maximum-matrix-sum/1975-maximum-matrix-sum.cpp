class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int mini=INT_MAX;
        long long sum=0;
        int count=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    count++;
                }
                mini=min(mini,abs(matrix[i][j]));
            }
        }
        if(count%2==1){
            sum-=2*mini;
        }
        return sum;
    }
};