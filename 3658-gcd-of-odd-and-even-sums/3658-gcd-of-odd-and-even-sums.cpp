class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum=0;
        int evenSum=0;
        int ans=1;
        for(int i=1;i<=n*2;i++){
            if(i%2==0){
                evenSum+=i;
            }
            else{
                oddSum+=i;
            }
        }
        int minElement=min(evenSum,oddSum);
        for(int i=minElement;i>=1;i--){
            if(evenSum%i==0 && oddSum%i==0){
                return i;
            }
        }
        return ans;
    }
};