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
    vector<int> rightSideView(TreeNode *root) {
        queue<TreeNode*> que;
        vector<int> result;
        
        if(NULL == root)
        {
            return result;
        }
        que.push(root);
        
        while(!que.empty())
        {
            int len = que.size();
            for(unsigned int i=0; i<len; i++)
            {
                TreeNode* pCur = que.front();
                que.pop();
                
                if(0==i)
                {
                    result.push_back(pCur->val);
                }
                if(pCur->right)
                {
                    que.push(pCur->right);
                }
                if(pCur->left)
                {
                    que.push(pCur->left);
                }
            }
            
        }// end while
        
        return result;
    }
};
