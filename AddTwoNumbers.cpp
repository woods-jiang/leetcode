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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *result=NULL;
        ListNode *p = NULL;
        int carry = 0;
        
        while(l1 && l2)
        {
            int tmp = l1->val+l2->val+carry;
            
            if(result == NULL)
            {
                result = p = new ListNode(tmp%10);
            }
            else
            {
                p->next = new ListNode(tmp%10);
                p = p->next;
            }
            
            carry = tmp/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1)
        {
            p->next = new ListNode((l1->val+carry)%10);
            carry = (l1->val+carry)/10;
            l1 = l1->next;
            p = p->next;
        }
        while(l2)
        {
            p->next = new ListNode((l2->val+carry)%10);
            carry = (l2->val+carry)/10;
            l2 = l2->next;
            p = p->next;
        }
        
        if (carry ==1)
        {
            p->next = new ListNode(carry);
        }
        return result;
    }
};