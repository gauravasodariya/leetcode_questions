class Solution {
public:
    long long total=0;
    long long maxProductt=0;
    int MOD=1e9+7;

    int totalSum(TreeNode* root){
        if (root==NULL){
            return 0;
        }

        int left=totalSum(root->left);
        int right=totalSum(root->right);

        return root->val+left+right;
    }

    int find(TreeNode* root){
        if (root == NULL){
            return 0;
        }

        int left=find(root->left);
        int right=find(root->right);

        long long currSum=root->val+left+right;
        long long product=currSum*(total-currSum);
        maxProductt=max(maxProductt, product);
        return currSum;
    }

    int maxProduct(TreeNode* root){
        total=totalSum(root);
        find(root);
        return maxProductt%MOD;
    }
};
