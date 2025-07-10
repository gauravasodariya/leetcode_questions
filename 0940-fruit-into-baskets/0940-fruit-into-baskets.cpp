class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        unordered_map<int,int>mp;
        int start=0,end=0;
        int total=0;
        int n=fruits.size();
        while(end<n)    
        {
            mp[fruits[end]]++;
            while(mp.size()>2)
            {
                mp[fruits[start]]--;
                if(mp[fruits[start]]==0)
                {
                    mp.erase(fruits[start]);
                }
                start++;
            }
            total=max(total,end-start+1);
            end++;
        }
        return total;
    }
};