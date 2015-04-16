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
    ListNode *swapPairs(ListNode *head) {
        if(NULL == head || NULL == head->next)
        {
            return head;
        }
        
        ListNode *pTmpHead = new ListNode(-1);
        ListNode *pTail = pTmpHead;
        
        while(head && head->next)
        {
            ListNode *pTmp = head->next->next;
            pTail->next = head->next;
            pTail->next->next = head;
            pTail = head;
            head = pTmp;
        }
        
        pTail->next = head;
        head = pTmpHead->next;
        delete pTmpHead;
        
        return head;
    }
};