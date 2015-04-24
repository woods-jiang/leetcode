/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        
        if(root != NULL)
        {
            sum = sum - root->val;
            
            if(root->left==NULL && root->right==NULL && sum == 0)
            {
                return true;
            }
            if (hasPathSum(root->left, sum))
                return true;
            if (hasPathSum(root->right, sum))
                return true;
        }
        return false;
    }
};