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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(NULL == head || NULL == head->next)
        {
            return head;
        }
        
        ListNode *pCur = head;
        ListNode *pNext = head->next;
        
        while(pNext)
        {
            if(pCur->val == pNext->val)
            {
                pCur->next = pNext->next;
                delete pNext;
                pNext = pCur->next;
            }
            else
            {
                pCur = pNext;
                pNext = pNext->next;
            }
        }
        
        return head;
    }
};