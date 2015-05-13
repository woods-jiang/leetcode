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
    bool hasCycle(ListNode *head) {
        
        ListNode *pSlow = head;
        ListNode *pFast = head;
        
        while(pFast!=NULL && pFast->next != NULL)
        {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
            
            if(pSlow == pFast)
            {
                return true;
            }
        }
        
        return false;
    }
};