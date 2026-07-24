class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int>st1;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                st1.insert(nums[i]^nums[j]);
            }
        }
        unordered_set<int>st2;
        for(auto it : st1){
            for(int i=0;i<nums.size();i++){
                st2.insert(it^nums[i]);
            }
        }
        return st2.size();
    }
};