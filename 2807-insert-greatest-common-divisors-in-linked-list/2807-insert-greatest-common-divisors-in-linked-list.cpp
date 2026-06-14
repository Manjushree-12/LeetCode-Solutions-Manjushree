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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
      ListNode* temp=head;
      if(temp==nullptr || temp->next==nullptr) { return head;}
        while(temp!=nullptr && temp->next!=nullptr)
        {
            ListNode* nex=temp->next;
            int g=gcd(temp->val,nex->val);
            ListNode* newHead=new ListNode(g);
            temp->next=newHead;
            newHead->next=nex;
            temp=nex;
        }
        return head;
        
    }
};