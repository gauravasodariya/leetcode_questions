class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int shift=nums[i]%n;
            int index=(i+shift)%n;
            if(index<0){
                index+=n;
            }
            ans[i]=nums[index];
        }
        return ans;
    }
};