class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int x=left;x<=right;x++){
            bool cover=false;
            for(int i=0;i<ranges.size();i++){
                int start=ranges[i][0];
                int end=ranges[i][1];
                if(x>=start && x<=end){
                    cover=true;
                    break;
                }
            }
            if(!cover){
                return false;
            }
        }
        return true;
    }
};