/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
private:
    class Compare
    {
    public:
        bool operator()(const ListNode *l1, const ListNode *l2)
        {
            return l1->val > l2->val;
        }
    };
        
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    
        if(lists.empty())
        {
            return NULL;
        }
        
        ListNode *pHead = new ListNode(0);
        ListNode *pTail = pHead;
        
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
        
        for(int i=0; i<lists.size(); i++)
        {
            if(lists[i]!=NULL)
            {
                pq.push(lists[i]);
            }
        }
        
        while(!pq.empty())
        {
            ListNode *pTmp = pq.top();
            pq.pop();
            
            if(pTmp->next!=NULL)
            {
                pq.push(pTmp->next);
            }
            
            pTail->next = pTmp;
            pTail = pTail->next;
        }
        
        pTail = pHead;
        pHead = pHead->next;
        delete pTail;
        pTail = NULL;
        
        return pHead;
    }
};