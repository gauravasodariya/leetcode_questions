class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int minValue=nums[0];
        int maxValue=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>maxValue){
                maxValue=nums[i];
            }
            if(nums[i]<minValue){
                minValue=nums[i];
            }
        }
        return 1LL*(maxValue-minValue)*k;
    }
};