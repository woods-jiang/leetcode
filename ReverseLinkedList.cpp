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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *pPre = head;
        
        if(NULL == head || NULL == head->next)
        {
            return head;
        }
        
        ListNode *pCur = head->next;
        
        pPre->next = NULL;
        
        while(pCur != NULL)
        {
            ListNode *pNext = pCur->next;
            pCur->next = pPre;
            pPre = pCur;
            pCur = pNext;
        }
        head = pPre;
        return head;
    }
};