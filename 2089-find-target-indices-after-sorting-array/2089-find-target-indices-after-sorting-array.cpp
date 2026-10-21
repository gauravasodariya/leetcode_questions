class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int count=0;
        int countTarget=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                count++;
            }
            if(nums[i]==target){
                countTarget++;
            }
        }
        while(countTarget--){
            ans.push_back(count);
            count++;
        }
        return ans;
    }
};