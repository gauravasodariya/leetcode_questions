class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};