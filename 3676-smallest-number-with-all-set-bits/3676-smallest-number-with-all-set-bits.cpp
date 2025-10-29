class Solution {
public:
    bool allSetBits(int num){
        return (num&(num+1))==0;
    }
    int smallestNumber(int n) 
    {
        int ans=n;
        while(!allSetBits(ans)){
            ans++;
        }
        return ans;
    }
};