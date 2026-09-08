class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        while (true) {
            ListNode* end = prev;

            for (int i = 0; i < k; i++) {
                end = end->next;
                if (end == nullptr) return dummy.next;
            }

            ListNode* start = prev->next;
            ListNode* next = end->next;

            ListNode* p = start;
            ListNode* q = next;

            while (p != next) {
                ListNode* temp = p->next;
                p->next = q;
                q = p;
                p = temp;
            }

            prev->next = end;
            prev = start;
        }
    }
};