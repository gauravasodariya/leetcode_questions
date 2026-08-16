class Solution {
public:
    int findProduct(int n){
        int product=1;
        while(n>0){
            int rem=n%10;
            product*=rem;
            n=n/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(findProduct(n)%t==0){
                return n;
            }
            n++;
        }
        return -1;
    }
};