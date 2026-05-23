class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
    //This checks if the current number nums[i] is greater than the next number.
    //(i + 1) % nums.size() ensures the last element compares with the first one (circular check).
    //If nums[i] is greater than the next number, it means the order is not increasing at this point.
            if(nums[i]>nums[(i+1)%nums.size()])
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};