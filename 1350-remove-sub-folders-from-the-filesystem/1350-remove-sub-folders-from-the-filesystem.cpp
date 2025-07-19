class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) 
    {
        unordered_set<string>st(folder.begin(),folder.end());
        vector<string>ans; 
        for(auto &currString : folder)
        {
            string temp=currString;
            bool var=false;
            while(!currString.empty())
            {
                auto position_of_last_slash=currString.find_last_of('/');
                currString=currString.substr(0,position_of_last_slash);
                if(st.find(currString)!=st.end())
                {
                    var=true;
                    break;
                }
            }
            if(var==false)
            {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};