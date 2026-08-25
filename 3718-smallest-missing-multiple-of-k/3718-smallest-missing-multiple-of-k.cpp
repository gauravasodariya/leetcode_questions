class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=k;
        while(mp.find(ans)!=mp.end()){
            ans+=k;
        }
        return ans;
    }
};