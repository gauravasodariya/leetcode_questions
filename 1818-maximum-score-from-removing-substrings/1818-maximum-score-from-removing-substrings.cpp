class Solution {
public:
    string removedSubstr(string s1,string s2)
    {        
        stack<char>st;
        for(auto ch :  s1)
        {
            if(ch==s2[1] && !st.empty() && st.top()==s2[0])
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        string tmp;
        while(!st.empty())
        {
            tmp.push_back(st.top());
            st.pop();
        }
        reverse(tmp.begin(),tmp.end());
        return tmp;
    }
    int maximumGain(string s, int x, int y) 
    {
        int n=s.size();
        int score=0;
        string maxString=(x>=y) ? "ab" : "ba";
        string minString=(x<y) ? "ab" : "ba";
        
        string tmp_first=removedSubstr(s,maxString);
        int l=tmp_first.size();
        int charRemoved=n-l;
        score+=(charRemoved/2)*max(x,y);

        string tmp_second=removedSubstr(tmp_first,minString);
        charRemoved=l-tmp_second.size();
        score+=(charRemoved/2)*min(x,y);
        return score;
    }
};