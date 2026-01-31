class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        int minValue=INT_MAX;
        int maxValue=INT_MIN;
        for(int i=0;i<nums.size();i++){
            minValue=min(minValue,nums[i]);
            maxValue=max(maxValue,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>minValue && nums[i]<maxValue){
                count++;
            }
        }
        return count;
    }
};