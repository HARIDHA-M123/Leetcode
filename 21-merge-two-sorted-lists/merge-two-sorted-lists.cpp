class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* resHead = nullptr;
        ListNode* resTail = nullptr;

        // Initialize head and tail
        if (list1->val < list2->val) {
            resHead = resTail = list1;
            list1 = list1->next;
        } else {
            resHead = resTail = list2;
            list2 = list2->next;
        }

        // Merge remaining nodes
        while (list1 && list2) {
            if (list1->val < list2->val) {
                resTail->next = list1;
                resTail = resTail->next;
                list1 = list1->next;
            } else {
                resTail->next = list2;
                resTail = resTail->next;
                list2 = list2->next;
            }
        }

        // Attach remaining nodes
        if (list1) resTail->next = list1;
        if (list2) resTail->next = list2;

        return resHead;
    }
};
