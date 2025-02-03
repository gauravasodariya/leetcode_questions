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
    int check(TreeNode *root,bool &isValid)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=check(root->left,isValid);
        int r=check(root->right,isValid);
        if(abs(l-r)>1)
        {
            isValid=0;
        }
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) 
    {
        bool isValid=1;
        check(root,isValid);
        return isValid;    
    }
};