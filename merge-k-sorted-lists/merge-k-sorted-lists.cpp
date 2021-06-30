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
    typedef pair<int , ListNode *> p ;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<p ,vector<p> , greater<p>> pq;
        
        ListNode *head = NULL , *tail = NULL;
        for (auto x : lists)
        {
            ListNode * temp = x;
            while (temp)
            {
                pq.push({temp->val , temp});
                temp = temp->next;
            }
        }
            
        while (pq.size())
        {
            auto temp = pq.top();
            pq.pop();
            
            if (head==NULL)
            {
                head = temp.second;
                tail = temp.second;
            }else
            {
                tail->next = temp.second;
                tail = temp.second;
            }
        }
        
        return head;
        
    }
};