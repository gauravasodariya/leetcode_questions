class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        int firstMinVal=INT_MAX;
        int secondMinVal=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<firstMinVal){
                secondMinVal=firstMinVal;
                firstMinVal=nums[i];
            }
            else{
                secondMinVal=min(secondMinVal,nums[i]);
            }
        }
        return ans+=firstMinVal+secondMinVal;
    }
};