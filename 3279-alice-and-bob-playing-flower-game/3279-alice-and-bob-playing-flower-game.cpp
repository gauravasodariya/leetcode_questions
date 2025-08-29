class Solution {
public:
    long long flowerGame(int n, int m) 
    {
        long long nOdd=ceil((double)n/2);
        long long mOdd=ceil((double)m/2);
        long long nEven=n/2;
        long long mEven=m/2;
        long long ans=(nOdd*mEven)+(nEven*mOdd);
        return ans;
    }
};