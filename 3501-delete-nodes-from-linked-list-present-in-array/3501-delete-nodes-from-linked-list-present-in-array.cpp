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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int>st;
        for(auto it : nums)
        {
            st.insert(it);
        }
        int n=head->val;
        
        while(st.find(n)!=st.end())
        {
            
            head=head->next;
            n=head->val;
            
        }
        ListNode* temp=head;
        
        if(temp->next!=NULL){temp=temp->next;}
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
         ListNode* pre=head;
         ListNode* cur=temp;
         
        while(cur!=NULL && cur->next!=NULL)
        {    int data=cur->val;
            ListNode* nex=cur->next;
            if(st.find(data)!=st.end())
            {
                pre->next=nex;
                nex=nex->next;
                cur->next=NULL; 
                cur=pre->next;
            }
            else
            {
                cur=cur->next;
                pre=pre->next;
            }
            
            
        }
        if(cur->next==NULL && cur!=NULL && st.find(cur->val)!=st.end())
         {
              pre->next=NULL;    
         }
        return dummy->next;
    }
};