class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int max=-1;
        map<int,int>mp;
        for(auto  num : arr)
        {
            mp[num]++;
        }
        for(auto num : mp)
        {
            if(num.first==num.second)
            {
                if(num.first>max)
                {
                    max=num.first;
                }
            }
        }
        return max;;
    }
};