class Solution {
public:
    long long dp[101][101];
    long long solve(int i,int j,vector<int>& robot,vector<vector<int>>&factory) {
        if(i==robot.size()){
            return 0;
        }
        if(j==factory.size()){
            return 1e18;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        long long ans=1e18;
        ans = solve(i,j+1,robot,factory);
        long long cost=0;

        for (int k=0;k<factory[j][1] && i+k<robot.size();k++){
            cost+=abs(robot[i+k]-factory[j][0]);
            ans=min(ans,cost+solve(i+k+1,j+1,robot,factory));
        }

        return dp[i][j]=ans;
    }

    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {

        // Step 1: sort robots
        sort(robot.begin(), robot.end());

        // Step 2: sort factories
        sort(factory.begin(), factory.end());

        // Step 3: initialize dp with -1
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, robot, factory);
    }
};