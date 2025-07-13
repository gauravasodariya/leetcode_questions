class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        unordered_map<char,int>mp;
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }   
        int count=0;
        for(auto it : mp)
        {
            if(count<it.second)
            {
                count=it.second;
            }
        }
        int numFreq=0;
        for(auto it : mp)
        {
            if(count==it.second)
            {
                numFreq++;
            }
        }
        return max((int)tasks.size(),(count-1)*(n+1)+numFreq);
    }
};