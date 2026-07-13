class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s="";
        for(int i=0;i<nums.size();i++){
            s+=to_string(nums[i]);
        }
        vector<int>ans;
        for(auto ch : s){
            ans.push_back(ch-'0');
        }
        return ans;
    }
};