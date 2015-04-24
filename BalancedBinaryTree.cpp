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
    bool isBalanced(TreeNode *root) {
        if(root == NULL)
            return true;
        if(TreeHigh(root) == -1)
        {
            return false;
        }
        
        return true;
    }
    
    int TreeHigh(TreeNode *pRoot)
    {
        if(pRoot == NULL)
            return 0;
        int leftHigh =  TreeHigh(pRoot->left);
        int rightHigh = TreeHigh(pRoot->right);
        
        if(leftHigh == -1 || rightHigh == -1)
            return -1;
            
        if(abs(leftHigh-rightHigh) > 1)
            return -1;
            
        return max(leftHigh, rightHigh) +1;
    }
};