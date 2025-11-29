public class Solution {
    public ListNode detectCycle(ListNode head) {
        if (head == null || head.next == null) {
            return null;
        }

        ListNode slow = head;
        ListNode fast = head;

        // Step 1: Detect cycle using fast and slow pointers
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) {  // cycle detected
                break;
            }
        }

        // If no cycle found
        if (fast == null || fast.next == null) {
            return null;
        }

        // Step 2: Move one pointer to head and move both one step at a time
        slow = head;
        while (slow != fast) {
            slow = slow.next;
            fast = fast.next;
        }

        return slow; // cycle starting point
    }
}
