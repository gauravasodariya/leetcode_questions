class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto num : mp){
            if(num.second==nums.size()/2){
                return num.first;
            }
        }
        return -1;
    }
};