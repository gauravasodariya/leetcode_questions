class Solution {
public:
    long long gcdSum(vector<int>& nums){
        vector<int>prefixGCD;
        int maxElement=0;
        for(int i=0;i<nums.size();i++){
            maxElement=max(maxElement,nums[i]);
            prefixGCD.push_back(gcd(nums[i],maxElement));
        }
        sort(prefixGCD.begin(),prefixGCD.end());
        long long ans=0;
        int i=0,j=prefixGCD.size()-1;
        while(i<j){
            ans+=gcd(prefixGCD[i],prefixGCD[j]);
            i++;
            j--;
        }
        return ans;
    }
};