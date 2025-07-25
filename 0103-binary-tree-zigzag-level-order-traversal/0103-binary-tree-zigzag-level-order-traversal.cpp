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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        st1.push(root);
        while(!st1.empty() || !st2.empty())
        {
            vector<int>level;
            if(!st1.empty())
            {
                while(!st1.empty())
                {
                    TreeNode *tmp=st1.top();
                    st1.pop();
                    level.push_back(tmp->val);
                    if(tmp->left)
                    {
                        st2.push(tmp->left);
                    }
                    if(tmp->right)
                    {
                        st2.push(tmp->right);
                    }
                }
            }
            else
            {
                while(!st2.empty())
                {
                    TreeNode *tmp=st2.top();
                    st2.pop();
                    level.push_back(tmp->val);
                    if(tmp->right)
                    {
                        st1.push(tmp->right);
                    }
                    if(tmp->left)
                    {
                        st1.push(tmp->left);
                    }
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};