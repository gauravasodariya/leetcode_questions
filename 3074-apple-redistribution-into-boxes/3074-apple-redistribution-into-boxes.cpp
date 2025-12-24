class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int totalSum = accumulate(apple.begin(),apple.end(),0);

        int i=0;
        while(totalSum>0){
            totalSum-=capacity[i];
            i++;
        }
        return i;
    }
};