/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
        ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*curr=head,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

          ListNode* reverseBetween(ListNode* head, int left, int right) {
            if(left==right) return head;
            int count=1;
            ListNode *curr=head,*prev=NULL,*start=head;
            while(curr&&count<right){
                if(count<left) prev=curr;
                if(count==left) start=curr;
                curr=curr->next;
                count++;
            }
            ListNode *temp=curr->next;
            curr->next=NULL;
            ListNode *rev=reverseList(start);
            if(prev)prev->next=rev;
            else head=rev;
            start->next=temp;
            return head;
        
    }
};