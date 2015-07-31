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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if(NULL == head || NULL == head->next || m >= n)
        {
            return head;
        }
        
        vector<ListNode*> range(n-m+1);
        
        ListNode *pIter = head;
        
        for(int i=1; i<m; i++)
        {
            pIter = pIter->next;
        }
        
        for(int i=m, j=0; i<=n; i++,j++)
        {
            range[j] = pIter;
            pIter = pIter->next;
        }
        
        for(int i=0; i<range.size()/2; i++)
        {
            swap(range[i]->val, range[n-m-i]->val);
        }
        
        return head;
    }
};

// v2

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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if(NULL == head || NULL == head->next || m >= n)
        {
            return head;
        }
        
        ListNode dummy(-1);
        dummy.next = head;
        
        ListNode *pCur = &dummy;
        
        for(int i=0; i<m-1; i++)
        {
            pCur = pCur->next;
        }
        
        ListNode *head2 = pCur;
        pCur = head2->next;
        ListNode *pNext = pCur->next;
        
        // 使用头插法，每次将后面一个元素插入到head2前面
        for(int i=m; i<n; i++)
        {
            pCur->next = pNext->next;
            pNext->next = head2->next;
            head2->next = pNext;
            pNext = pCur->next;
        }
        
        return dummy.next;
    }
};