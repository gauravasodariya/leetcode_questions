class Solution {
public:
    int minPairIndex(vector<int>&nums){
        int index;
        int sum=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+nums[i+1]<sum){
                sum=nums[i]+nums[i+1];
                index=i;
            }
        }
        return index;
    }
    int minimumPairRemoval(vector<int>& nums){
        int count=0;
        while(!is_sorted(nums.begin(),nums.end())){
            int index=minPairIndex(nums);
            nums[index]=nums[index]+nums[index+1];
            nums.erase(nums.begin()+index+1);
            count++;
        }
        return count;
    }
};