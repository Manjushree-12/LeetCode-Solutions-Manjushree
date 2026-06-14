class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);

        ListNode* curr = head;
        int maxVal = 0;

        ListNode* prev = nullptr;

        while (curr) {
            if (curr->val >= maxVal) {
                maxVal = curr->val;
                prev = curr;
                curr = curr->next;
            } else {
                prev->next = curr->next;
                curr = curr->next;
            }
        }

        return reverse(head);
    }
};