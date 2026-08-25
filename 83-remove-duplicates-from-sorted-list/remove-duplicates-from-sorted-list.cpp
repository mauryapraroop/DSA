class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        // Empty list or only one node
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {

            if (curr->val == curr->next->val) {
                // Duplicate node
                ListNode* nodeToDelete = curr->next;

                curr->next = curr->next->next;

                delete nodeToDelete;
            }
            else {
                // Move forward only when values are different
                curr = curr->next;
            }
        }

        return head;
    }
};