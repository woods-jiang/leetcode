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
        
        ListNode *pTmpHead = new ListNode(0);
        
        pTmpHead->next = head;
        
        ListNode *p = pTmpHead;
        
        while(p->next !=NULL && p->next->next != NULL)
        {
            if(p->next->val == p->next->next->val)
            {
                int delVal = p->next->val;
                
                while(p->next != NULL && p->next->val == delVal)
                {
                    ListNode *pTmp = p->next;
                    p->next = p->next->next;
                    delete pTmp;
                    pTmp = NULL;
                }
            }
            else
            {
                p = p->next;
            }
        }
        
        head = pTmpHead->next;
        delete pTmpHead;
        return head;
    }
};