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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || k <= 0)
        {
            return head;
        }
        
        int len = 0;
        ListNode *pCur= head;
        
        while(pCur->next != NULL)
        {
            len++;
            pCur = pCur->next;
        }
        
        len++;
        k = k%len;
        
        // 组成循环链表
        pCur->next = head;
        pCur = head;
        
        for(int i=0; i<len-k-1;i++)
        {
            pCur = pCur->next;
        }
        
        head = pCur->next;
        pCur->next = NULL;
        
        return head;
    }
};