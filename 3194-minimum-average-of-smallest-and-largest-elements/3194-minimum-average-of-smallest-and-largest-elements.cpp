class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        double ans=INT_MAX;
        while(i<j){
            double average=(nums[i]+nums[j])/2.0;
            ans=min(ans,average);
            i++;
            j--;
        }
        return ans;
    }
};