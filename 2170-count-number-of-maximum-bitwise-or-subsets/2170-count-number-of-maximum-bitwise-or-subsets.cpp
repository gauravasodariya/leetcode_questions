class Solution {
public:
    int countSubSet(int id,int currOr,vector<int>&nums,int maxOR,vector<vector<int>>&t)
    {
        if(id==nums.size())
        {
            if(currOr==maxOR)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(t[id][currOr]!=-1)
        {
            return t[id][currOr];
        }
        int takeCount=countSubSet(id+1,currOr | nums[id],nums,maxOR,t);
        int notTakeCount=countSubSet(id+1,currOr,nums,maxOR,t);
        return t[id][currOr]=takeCount+notTakeCount;
    }
    int countMaxOrSubsets(vector<int>& nums) 
    {
        int maxOR=0;
        for(auto num : nums)
        {
            maxOR=maxOR | num;
        }
        int n=nums.size();
        vector<vector<int>>t(n+1,vector<int>(maxOR+1,-1));
        int currOr=0;
        return countSubSet(0,currOr,nums,maxOR,t);
    }
};