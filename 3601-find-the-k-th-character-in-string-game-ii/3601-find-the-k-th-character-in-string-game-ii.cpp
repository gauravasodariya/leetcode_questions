class Solution {
public:
    char kthCharacter(long long k, vector<int>& nums) 
    {
        if(k==1)
        {
            return 'a';
        }
        int n=nums.size();
        long long len=1;
        long long newK=-1;
        int operationType=-1;
        for(int i=0;i<n;i++)
        {
            len=len*2;
            if(len>=k)
            {
                operationType=nums[i];
                newK=k-(len/2);
                break;
            }
        }
        char ch=kthCharacter(newK,nums);
        if(operationType==0)
        {
            return ch;
        }
        else
        {
            return ch=='z'? 'a':ch+1;
        }
    }
};