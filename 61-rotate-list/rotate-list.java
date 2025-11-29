class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k == 0) return head;

        // Step 1: Find length
        ListNode temp = head;
        int length = 1; // head counts as 1
        while (temp.next != null) {
            temp = temp.next;
            length++;
        }

        // Step 2: Connect tail to head → circular list
        temp.next = head;

        // Step 3: Find new tail: (length - k % length - 1)th node
        k = k % length;
        int stepsToNewTail = length - k - 1;
        ListNode newTail = head;
        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail.next;
        }

        // Step 4: New head is next of new tail
        ListNode newHead = newTail.next;

        // Step 5: Break the circle
        newTail.next = null;

        return newHead;
    }
}
