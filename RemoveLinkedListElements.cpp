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
    ListNode* removeElements(ListNode* head, int val) {

        if (NULL == head)
            return NULL;

        ListNode *pCur = head;
        // 头结点后面再考虑，先留着啦
        while (pCur->next != NULL)
        {
            ListNode *pNext = pCur->next;

            if (pNext->val == val)
            {
                pCur->next = pNext->next;
                delete pNext;
                pNext = pCur->next;
            }
            else
            {
                pCur = pCur->next;
            }
        }

        // 再来考虑头结点
        if (head->val == val)
        {
            pCur = head;
            head = head->next;
            delete pCur;
            pCur = NULL;
        }

        return head;
    }
};