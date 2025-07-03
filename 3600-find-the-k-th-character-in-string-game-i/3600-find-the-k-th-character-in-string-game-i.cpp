class Solution {
public:
    char kthCharacter(int k) 
    {
        int n=k-1;
        int count=0;
        while(n>0)
        {
            if(n%2==1)
            {
                count++;
            }
            n=n/2;
        }
        return 'a'+count;
    }
};