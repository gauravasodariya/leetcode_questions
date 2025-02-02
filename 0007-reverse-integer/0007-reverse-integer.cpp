class Solution {
public:
    int reverse(int x) 
    {
        if(x < INT_MIN || x > INT_MAX) {
            return 0;
        }
        int rem;
        long long n = 0;
        while(x!=0)
        {
            rem = x % 10;
            n=(n * 10) + rem;
            x /= 10;

             if(n < INT_MIN || n > INT_MAX) {
                return 0;
            }
        } 
        return n;   
    }
};