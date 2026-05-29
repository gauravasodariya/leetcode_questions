class Solution {
public:
    int sumOfDigits(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int minElement=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int currSum=sumOfDigits(nums[i]);
            minElement=min(minElement,currSum);
        }
        return minElement;
    }
};