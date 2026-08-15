class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        vector<int>zero(n,0);
        if(zero==nums){
            return 0;
        }
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x ? n : n-1;
    }
};