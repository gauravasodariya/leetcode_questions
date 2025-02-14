class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int ast : asteroids)
        {
            bool isDestroid=false;
            while(!st.empty() && ast<0 && st.top()>0)
            {
                if(abs(ast)>st.top())
                {
                    st.pop();
                }
                else if(abs(ast)==st.top())
                {
                    st.pop();
                    isDestroid=true;
                    break;
                }
                else
                {
                    isDestroid=true;
                    break;
                }
            }
            if(!isDestroid)
            {
                st.push(ast);
            }
        }
        vector<int>res(st.size());
        for(int i=st.size()-1;i>=0;i--)
        {
            res[i]=st.top();
            st.pop();
        }
        return res;
    }
};