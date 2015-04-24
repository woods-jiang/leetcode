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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        
        stack<TreeNode*> st;
        vector<vector<int>> result;
        vector<int> answer;
        int curSum = 0;
        
        // 后序遍历
        while(root!=NULL)
        {
            answer.push_back(root->val);
            curSum += root->val;
            st.push(root);
            
            if(root->left)
                root = root->left;
            else if(root->right)
                root = root->right;
            else    // 叶子节点
            {
                if(curSum == sum)
                    result.push_back(answer);
                answer.pop_back();
                curSum -= root->val;
                st.pop();
                
                // 检查刚刚出栈叶节点的兄弟节点
                while(!st.empty())
                {
                    // 没有右节点，或者右节点已经被访问过了
                    if(st.top()->right == NULL || st.top()->right == root)
                    {
                        root = st.top();
                        st.pop();
                        answer.pop_back();
                        curSum -= root->val;
                    }
                    else
                    {   // 跳转到右子树上去了
                        root=st.top()->right;
                        break;
                    }
                }
                
                if(st.empty())
                    break;
            }
        }
        
        return result;
    }
};