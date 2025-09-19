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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int p=0;
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* fast = temp;
        ListNode* slow = temp;
       for(int i=0;i<=n;i++)
       {
         fast = fast->next;
       }
       while(fast!=nullptr)
       {
        fast = fast->next;
        slow = slow->next;
       }
           ListNode* node = slow->next;
            slow->next = node->next;
             delete(node);
     return temp->next;
    }
};