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
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            ans.push_back(q.front()->val);
            while(n--)
            {
                TreeNode *tmp=q.front();
                q.pop();
                if(tmp->right)
                {
                    q.push(tmp->right);
                }
                if(tmp->left)
                {
                    q.push(tmp->left);
                }
            }
        }
        return ans; 
    }
};