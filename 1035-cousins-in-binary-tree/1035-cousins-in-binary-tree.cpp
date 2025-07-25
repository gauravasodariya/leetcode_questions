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
    bool parent(TreeNode *root,int &x,int &y)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left && root->right)
        {
            if(root->left->val==x && root->right->val==y)
            {
                return 1;
            }
            if(root->left->val==y && root->right->val==x)
            {
                return 1;
            }
        }
        return parent(root->left,x,y) || parent(root->right,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) 
    {
        queue<TreeNode*>q;
        q.push(root);
        int l1=-1,l2=-1;
        int level=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                TreeNode *tmp=q.front();
                q.pop();
                if(tmp->val==x)
                {
                    l1=level;
                }
                if(tmp->val==y)
                {
                    l2=level;
                }
                if(tmp->left)
                {
                    q.push(tmp->left);
                }
                if(tmp->right)
                {
                    q.push(tmp->right);
                }
            }
            level++;
            if(l1!=l2)
            {
                return 0;
            }
            if(l1!=-1)
            {
                break;
            }
        }
        return !(parent(root,x,y));
    }
};