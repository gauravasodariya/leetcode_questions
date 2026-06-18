class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(true){
            bool found=false;
            for(int num : nums){
                if(num==original){
                    found=true;
                    original=2*num;
                    break;
                }
            }
            if(found==false){
                return original;
            }
        }
        return original;
    }
};