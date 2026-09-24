class Solution {
public:
    bool findSum(int num,int i){
        string s=to_string(num);
        int sum=0;
        for(int j=0;j<s.size();j++){
            sum+=s[j]-'0';
        }
        return sum==i;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(findSum(nums[i],i)){
                return i;
            }
        }
        return -1;
    }
};