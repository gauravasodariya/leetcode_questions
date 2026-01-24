class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int ans=0,sum=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            sum=nums[i]+nums[j];
            ans=max(ans,sum);
            i++;
            j--;
        }
        return ans;
    }
};