class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>tmp=arr;
        sort(tmp.begin(),tmp.end());
        unordered_map<int,int>mp;
        int rank=1;
        for(int i=0;i<tmp.size();i++){
            if(mp[tmp[i]]==0){
                mp[tmp[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};