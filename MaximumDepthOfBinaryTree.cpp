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
    int maxDepth(TreeNode* root) {
        
        if(NULL == root)
            return 0;
            
        int maxDep = 0;
        int depth = 0;
        stack<TreeNode*> st;
        TreeNode *p = root;
        
        // 树的非递归后续遍历
        while(p != NULL)
        {
            depth++;
            st.push(p);
            
            if(p->left != NULL)
            {
                p = p->left;
            }
            else if(p->right != NULL)
            {
                p = p->right;
            }
            else    // 叶子节点
            {
                if(depth > maxDep)
                {
                    maxDep = depth;
                }

                st.pop();
                depth--;
                
                while(!st.empty())
                {
                    if(st.top()->right == p || st.top()->right == NULL)
                    {
                        p = st.top();
                        st.pop();
                        depth--;
                    }
                    else
                    {
                        p = st.top()->right;
                        break;
                    }
                }
            }
            
            if(st.empty())
            {
                break;
            }
        }
        
        return maxDep;
    }
};