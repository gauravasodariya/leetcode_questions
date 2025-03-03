class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int>mp;
        stack<int>st;
        vector<int>ans;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<nums2[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                mp.insert({nums2[i],-1});
            }
            else
            {
                mp.insert({nums2[i],st.top()});
            }
            st.push(nums2[i]);
        }
        for(auto x : nums1)
        {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};