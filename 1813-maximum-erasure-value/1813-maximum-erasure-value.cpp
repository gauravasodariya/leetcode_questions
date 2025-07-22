class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        unordered_set<int>st;
        int i=0,j=0,sum=0,ans=0;
        int n=nums.size();
        while(j<n)
        {
            if(!st.count(nums[j]))
            {
                sum=sum+nums[j];
                ans=max(ans,sum);
                st.insert(nums[j]);
                j++;
            }
            else
            {
                while(i<n && st.count(nums[j]))
                {
                    sum-=nums[i];
                    st.erase(nums[i]);
                    i++;
                }
            }
        }
        return ans;
    }
};