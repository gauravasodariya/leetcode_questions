class Solution {
public:
    int commonFactors(int a, int b) {
        int min_element=min(a,b);
        int count=0;
        for(int i=1;i<=min_element;i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
    }
};