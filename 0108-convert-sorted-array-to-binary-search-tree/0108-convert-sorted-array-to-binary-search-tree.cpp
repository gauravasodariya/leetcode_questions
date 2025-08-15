/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* arrayToBST(vector<int>&nums,int start,int end,vector<int>&ans)
    {
        if(start>end)
        {
            return 0;
        }
        int mid=(start+end)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=arrayToBST(nums,start,mid-1,ans);
        root->right=arrayToBST(nums,mid+1,end,ans);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        vector<int>ans;
        return arrayToBST(nums,0,nums.size()-1,ans);    
    }
};