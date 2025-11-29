class Solution {
    public boolean isPalindrome(ListNode head) {
        
        if (head == null || head.next == null) 
            return true;

        // Step 1: Find middle using slow and fast pointer
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        // Step 2: Reverse second half
        ListNode secondHalf = reverse(slow);

        // Step 3: Compare first half and second half
        ListNode first = head;

        while (secondHalf != null) {
            if(first.val != secondHalf.val)
                return false;

            first = first.next;
            secondHalf = secondHalf.next;
        }

        return true;
    }

    // Function to reverse linked list
    private ListNode reverse(ListNode head) {
        ListNode prev = null;
        while (head != null) {
            ListNode next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
}
