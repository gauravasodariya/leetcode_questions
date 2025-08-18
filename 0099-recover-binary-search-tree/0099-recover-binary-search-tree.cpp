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
    vector<int>ans;
    int index=0;
    void inorder(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    void fixInorder(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        fixInorder(root->left);
        root->val=ans[index++];
        fixInorder(root->right);
    }
    void recoverTree(TreeNode* root) 
    {
        inorder(root);
        sort(ans.begin(),ans.end());
        fixInorder(root);
    }
};