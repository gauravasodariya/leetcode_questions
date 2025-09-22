class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int ans=0;
        int maxFreq=0;
        vector<int>arr(101);
        for(int num : nums)
        {
            arr[num]++;
            maxFreq=max(maxFreq,arr[num]);
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==maxFreq)
            {
                ans+=maxFreq;
            }
        }
        return ans;
    }
};