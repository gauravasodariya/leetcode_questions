class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int count = 0;
        for (int i : nums) 
        {
            mp[i]++;
        }
        while (true) 
        {
            bool foundDuplicate = false;
            for(auto &entry : mp) 
            {
                if (entry.second>1) 
                {
                    foundDuplicate = true;
                    break;
                }
            }
            if (!foundDuplicate) 
            {
                break;
            }
            for (int i=0;i<3;i++) 
            {
                int num = nums.front();
                nums.erase(nums.begin());  
                mp[num]--;
                if (mp[num] == 0) 
                {
                    mp.erase(num);  
                }
            }
            count++;
        }
        return count;  
    }
};