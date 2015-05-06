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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> result;
        
        if(NULL == root)
        {
            return result;
        }
        
        queue<TreeNode*> que;
        
        que.push(root);
        
        while(!que.empty())
        {
            int size = que.size();
            result.push_back(vector<int>());
            
            for(int i=0; i<size; i++)
            {
                TreeNode *pTmp = que.front();
                que.pop();
                
                if(pTmp->left != NULL)
                {
                    que.push(pTmp->left);
                }
                if(pTmp->right != NULL)
                {
                    que.push(pTmp->right);
                }
                
                result.back().push_back(pTmp->val);
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};