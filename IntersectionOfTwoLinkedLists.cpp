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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenghA=0;
    	int lenghB=0;
    	ListNode* pA = headA;
    	ListNode* pB = headB;
    	if (NULL == pA || NULL == pB)
    	{
    		return NULL;
    	}
    	while (NULL != pA)
    	{
    		lenghA += 1;
    		pA = pA->next;
    	}
    	while (NULL != pB)
    	{
    		lenghB += 1;
    		pB = pB->next;
    	}
    	pA = headA;
    	pB = headB;
    	if (lenghA > lenghB)
    	{
    		for (int i = lenghA - lenghB; i > 0; i--)
    			pA = pA->next;
    	}
    	else
    	{
    		for (int i = lenghB - lenghA; i > 0; i--)
    			pB = pB->next;
    	}
    	while (NULL != pA && NULL != pB)
    	{
    		if (pA->val == pB->val)
    			return pA;
    		pA = pA->next;
    		pB = pB->next;
    	}
    	return NULL;
    }
};
