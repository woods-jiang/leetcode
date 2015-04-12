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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // l1->1 2 3 5 7
        // l2->2 4 6 8 9
        
        if(NULL == l1 && NULL == l2)
            return NULL;
        if(l1!=NULL && NULL == l2)
            return l1;
        if(NULL == l1 && NULL != l2)
            return l2;
        
        ListNode *pHead = new ListNode(0);
        ListNode *pTail = pHead;
        
        while(l1&&l2)
        {
            ListNode *pTmp;

            if(l1->val > l2->val)
            {
                pTail->next = l2;
                l2 = l2->next;
            }
            else
            {
                pTail->next = l1;
                l1 = l1->next;
            }
            pTail = pTail->next;
        }
        
        if(NULL==l1 && NULL!=l2)
            pTail->next = l2;
        if(NULL!=l1 && NULL == l2)
            pTail->next = l1;
        
        pTail = pHead;
        pHead = pHead->next;
        delete pTail;
        
        return pHead;
    }
};