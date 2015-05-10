/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if(NULL == head || NULL == head->next || m >= n)
        {
            return head;
        }
        
        vector<ListNode*> range(n-m+1);
        
        ListNode *pIter = head;
        
        for(int i=1; i<m; i++)
        {
            pIter = pIter->next;
        }
        
        for(int i=m, j=0; i<=n; i++,j++)
        {
            range[j] = pIter;
            pIter = pIter->next;
        }
        
        for(int i=0; i<range.size()/2; i++)
        {
            swap(range[i]->val, range[n-m-i]->val);
        }
        
        return head;
    }
};