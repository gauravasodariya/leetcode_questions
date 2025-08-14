class Solution {
public:
    string largestGoodInteger(string num) 
    {
        string ans="";
        for(int i=1;i<num.length()-1;i+=1)
        {
            if(num[i-1]==num[i] && num[i+1]==num[i])
            {
                ans=max(ans,num.substr(i-1,3));
            }
        }
        return ans;
    }
};