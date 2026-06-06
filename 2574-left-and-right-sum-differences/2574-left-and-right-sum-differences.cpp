class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftSum(n);
        vector<int>rightSum(n);
        leftSum[0]=0;
        for(int i=0;i<nums.size()-1;i++){
            leftSum[i+1]=leftSum[i]+nums[i];
        }
        rightSum[n-1]=0;
        for(int i=n-1;i>0;i--){
            rightSum[i-1]=rightSum[i]+nums[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;
    }
};