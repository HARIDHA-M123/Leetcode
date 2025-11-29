class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallHead = NULL;
        ListNode* smallTail = NULL;
        ListNode* bigHead = NULL;
        ListNode* bigTail = NULL;
        
        ListNode* curr = head;
        
        while(curr){
            if(curr->val < x){
                if(!smallHead){
                    smallHead = smallTail = curr;
                } else {
                    smallTail->next = curr;
                    smallTail = curr;
                }
            } else {
                if(!bigHead){
                    bigHead = bigTail = curr;
                } else {
                    bigTail->next = curr;
                    bigTail = curr;
                }
            }
            curr = curr->next;
        }

        // If no smaller values found
        if(!smallHead) return bigHead;
        
        // Connect small and big lists
        smallTail->next = bigHead;
        
        // Last node should end properly
        if(bigTail) bigTail->next = NULL;
        
        return smallHead;
    }
};
