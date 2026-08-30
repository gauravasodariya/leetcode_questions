class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex=min_element(nums.begin(),nums.end())-nums.begin();
        int maxIndex=max_element(nums.begin(),nums.end())-nums.begin();
        int leftIndex=min(minIndex,maxIndex);
        int rightIndex=max(minIndex,maxIndex);
        int n=nums.size();
        int ans=INT_MAX;
        ans=min(ans,(leftIndex+1)+(n-rightIndex));
        ans=min(ans,rightIndex+1);
        ans=min(ans,n-leftIndex);
        return ans;
    }
};