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
    void deleteNode(ListNode* node) {
        // note is not the tail
        node->val = node->next->val;
        ListNode *pTmpNode = node->next;
        node->next = node->next->next;
        delete pTmpNode;
    }
};