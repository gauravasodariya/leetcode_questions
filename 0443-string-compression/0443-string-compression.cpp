class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int count=1;
        int index=0;
        for(int i=1;i<=chars.size();i++)
        {
            if(i<chars.size() && chars[i]==chars[i-1])
            {
                count++;
            }
            else
            {
                chars[index++]=chars[i-1];
                if(count>1)
                {
                    string cnt=to_string(count);
                    for(char c : cnt)
                    {
                        chars[index++]=c;
                    }
                }
                count=1;
            }
        }
        return index;
    }
};