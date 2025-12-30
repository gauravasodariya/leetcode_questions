class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int>mp;
        int ans=-1,maxi=-1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto num : mp){
            if(num.first%2==0 && num.second>maxi){
                maxi=num.second;
                ans=num.first;
            }
        }
        return ans;
    }
};