class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=1;
        int maxElement=nums[0];
        int minElement=nums[0];
        int i=0,j=0;
        while(j<nums.size()){
            minElement=nums[i];
            maxElement=nums[j];

            while(i<j && maxElement>(long long)k*minElement){
                i++;
                minElement=nums[i];
            }
            l=max(l,j-i+1);
            j++;
        }
        return nums.size()-l;
    }
};