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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *pSlow = head;
        ListNode *pFast = head;
        
        while(pFast !=NULL && pFast->next != NULL)
        {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
            
            if(pSlow == pFast)
            {
                ListNode *pSlow2 = head;
                while(pSlow2 != pSlow)
                {
                    pSlow2 = pSlow2->next;
                    pSlow = pSlow->next;
                }
                return pSlow;
            }
        }
        
        return NULL;
    }
};