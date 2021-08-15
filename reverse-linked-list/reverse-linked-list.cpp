/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if (!head || !head->next)
            return head;
        
        
        ListNode * temp = reverseList (head->next);
        
        ListNode *end = head->next;
        end->next = head;
        head->next = NULL;
        
        return temp;
    }
};