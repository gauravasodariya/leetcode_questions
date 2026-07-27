class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1>max1){
                max2=max1;
                max1=nums[i]-1;
            }
            else if(nums[i]-1>max2){
                max2=nums[i]-1;
            }
        }
        return max1*max2;
    }
};