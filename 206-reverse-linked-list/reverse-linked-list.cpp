//best solution reduce time complexity
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode * prev=NULL,*temp,*curr;
       curr=head;

       while(curr)
       {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
       }
       return prev;
    }
};