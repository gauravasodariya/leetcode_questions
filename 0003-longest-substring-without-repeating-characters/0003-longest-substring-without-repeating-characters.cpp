class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int>count(256,0);
        int start=0,end=0,len=0;
        while(end<s.size())
        {
            count[s[end]]++;
            while(count[s[end]]>1)
            {
                count[s[start]]--;
                start++;
            }
            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
};