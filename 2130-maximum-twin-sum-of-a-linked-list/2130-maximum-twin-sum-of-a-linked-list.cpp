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
    int pairSum(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size();
        int max_val=INT_MIN;
        for(int i=0;i<n/2;i++)
        {   
            int sum=ans[i]+ans[n-1-i];
            max_val=max(max_val,sum);
        }
        return max_val;
        
    }
};