class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars){
        sort(hBars.begin(),hBars.end());        
        sort(vBars.begin(),vBars.end());

        int maxHorizontal=1;
        int maxVerticle=1;

        int concecutivehBars=1;
        for(int i=1;i<hBars.size();i++){
            if(hBars[i]-hBars[i-1]==1){
                concecutivehBars++;
            }
            else{
                concecutivehBars=1;
            }
            maxHorizontal=max(maxHorizontal,concecutivehBars);
        }
        int concecutivehvBars=1;
        for(int i=1;i<vBars.size();i++){
            if(vBars[i]-vBars[i-1]==1){
                concecutivehvBars++;
            }
            else{
                concecutivehvBars=1;
            }
            maxVerticle=max(maxVerticle,concecutivehvBars);
        }
        int side=min(maxHorizontal,maxVerticle)+1;
        return side*side;
    }
};