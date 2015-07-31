/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(NULL == root)
        {
            return true;
        }
        return symHelper(root->left, root->right);
        
    }
private:
    bool symHelper(TreeNode* pT1, TreeNode*pT2)
    {
        if(NULL == pT1)
        {
            return pT2 == NULL;
        }
        if(NULL == pT2 || pT1->val != pT2->val)
        {
            return false;
        }
        
        return symHelper(pT1->left, pT2->right) && symHelper(pT1->right, pT2->left);
    }
};