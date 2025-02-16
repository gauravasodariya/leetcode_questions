class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n,0);
        stack<int>s;
        for(int i=2*n-1;i>=0;i--)
        {
            int j=i%n;
            while(!s.empty() && s.top()<=nums[j])
            {
                s.pop();
            }
            if(s.empty())
            {
                ans[j]=-1;
            }
            else
            {
                ans[j]=s.top();
            }
            s.push(nums[j]);
        }
        return ans;    
    }
};