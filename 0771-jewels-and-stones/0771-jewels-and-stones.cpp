class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char>st(jewels.begin(),jewels.end());
        int count=0;
        for(int i=0;i<stones.size();i++){
            if(st.count(stones[i])){
                count++;
            }
        }
        return count;
    }
};