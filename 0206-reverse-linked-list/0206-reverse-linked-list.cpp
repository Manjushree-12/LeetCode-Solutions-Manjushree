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
        ListNode* temp=head;
        ListNode* newHead=NULL;
        while(temp!=nullptr)
        {
            ListNode* nex=temp->next;
            temp->next=newHead;
            newHead=temp;
            temp=nex;

        }
        return newHead;
    }
};