class Solution {
public:
    unordered_set<string> st;
    void buildSet() 
    {
        for(int p=0;p<=29; p++) 
        {
            string s=to_string(1<<p);
            sort(s.begin(),s.end());
            st.insert(s);  
        }
    }

    bool reorderedPowerOf2(int n) 
    {
        if(st.empty()) 
        {
            buildSet(); 
        }
        string s=to_string(n);
        sort(s.begin(),s.end());
        return st.count(s);
    }
};