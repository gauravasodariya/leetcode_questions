class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxArea=0;
        while(left<right)
        {
            int length=min(height[left],height[right]);
            int width=right-left;
            int currentArea=length*width;
            maxArea=max(maxArea,currentArea);
            if(height[left]<height[right])
            {
                left++;
            }
            else 
            {
                right--;
            }
        }
        return maxArea;
    }
};