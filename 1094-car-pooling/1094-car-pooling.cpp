class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(auto trip : trips){
            int count=trip[0];
            int start=trip[1];
            int end=trip[2];
            mp[start]+=count;
            mp[end]-=count;
        }
        int total=0;
        for(auto event : mp){
            total+=event.second;
            if(total>capacity){
                return false;
            }
        }
        return true;
    }
};