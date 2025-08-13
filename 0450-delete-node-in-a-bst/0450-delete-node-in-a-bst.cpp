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
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root==NULL)
        {
            return NULL;
        }
        else if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
        else
        {
            //if does not have child
            if(!root->left && !root->right)
            {
                delete root;
                return NULL;
            }
            //if single right child exist
            else if(!root->left)
            {
                TreeNode *tmp=root->right;
                delete root;
                return tmp;
            }
            //if single left child exist
            else if(!root->right)
            {
                TreeNode *tmp=root->left;
                delete root;
                return tmp;
            }
            //if both left and right child exist;
            else
            {
                TreeNode *parent=root;
                TreeNode *child=root->left;
                //find gretest element on left side
                while(child->right)
                {
                    parent=child;
                    child=child->right;
                }
                if(parent!=root)
                {
                    parent->right=child->left;
                    child->left=root->left;
                    child->right=root->right;
                    delete root;
                    return child;
                }
                else
                {
                    child->right=root->right;
                    delete root;
                    return child;
                }
            }
        }
        return root;
    }
};