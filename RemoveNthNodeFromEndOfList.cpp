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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
        if(head==NULL || n <= 0)
            return NULL;
            
        ListNode *pPreNode = head;
        ListNode *pAfterNode = head;
        
        while(pPreNode && n > 0)
        {
            pPreNode = pPreNode->next;
            --n;
        }
        
        // n大于链表中的节点数
        if(pPreNode==NULL && n!=0)
            return head;
        
        // 删除头结点
        if(pPreNode==NULL && n==0)
        {
            pPreNode = pAfterNode;
            pAfterNode = pAfterNode->next;
            
            if(pPreNode!=NULL)
                delete pPreNode;
                
            return pAfterNode;
        }
            
        while(pPreNode->next)
        {
            pPreNode = pPreNode->next;
            pAfterNode = pAfterNode->next;
        }
        
        if(pAfterNode != NULL)
        {
            pPreNode = pAfterNode->next;
            pAfterNode->next = pAfterNode->next->next;
            delete pPreNode;
            pPreNode = NULL;
        }
        
        return head;
    }
};