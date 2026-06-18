class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end());
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxElement){
                index=i;
                continue;
            }
            if(maxElement<nums[i]*2){
                return -1;
            }
        }
        return index;
    }
};