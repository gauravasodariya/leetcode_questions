class Solution {
public:
    int calculateSum(int n){
        int sum=0;
        int product=1;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            product*=digit;
            n=n/10;
        }
        return sum+product;
    }
    bool checkDivisibility(int n) {
        int sum=calculateSum(n);
        return n%sum==0;
    }
};