class Solution {
public:

    ListNode* solve(ListNode* first, ListNode* second) {

        ListNode* curr1 = first;
        ListNode* next1 = curr1->next;

        ListNode* curr2 = second;
        ListNode* next2 = curr2->next;

        while (next1 != NULL && curr2 != NULL) {

            if (curr2->val >= curr1->val &&
                curr2->val <= next1->val) {

                curr1->next = curr2;
                curr2->next = next1;

                curr1 = curr2;
                curr2 = next2;

                if (curr2 != NULL)
                    next2 = curr2->next;
            }
            else {
                curr1 = next1;
                next1 = next1->next;
            }
        }

        if (curr2 != NULL) {
            curr1->next = curr2;
        }

        return first;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        if (list1->val <= list2->val) {
            return solve(list1, list2);
        }
        else {
            return solve(list2, list1);
        }
    }
};