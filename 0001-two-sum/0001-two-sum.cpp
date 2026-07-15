class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        unordered_map<int,int>map;  
        for (int i=0;i<nums.size();i++) 
        {
            int num=nums[i]; 
            int rem=target-num;
            if (map.find(rem)!=map.end()) 
            {
                int index=map[rem];  
                return {i,index};
            }
            map[num]=i;
        }
        return {-1,-1};
    }
};
