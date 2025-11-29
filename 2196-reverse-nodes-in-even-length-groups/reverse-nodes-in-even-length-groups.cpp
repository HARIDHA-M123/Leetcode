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
        ListNode *reverseList(ListNode * head){
         ListNode *curr=head,*prev=NULL,*temp;
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode *start=head,*curr=head,*prev=NULL;
        ListNode *temp,*rev;
        int count=1,i;
        while(curr){
            for(i=1;i<count&&curr;curr=curr->next,i++);
            if(curr==NULL) i--;
            if(i%2==0){
                if(curr==NULL) temp=NULL;
                else{
                    temp=curr->next;
                    curr->next=NULL;
                }
            rev=reverseList(start);
            if(prev) prev->next=rev;
            else head=rev;
            prev=start;
            start=curr=temp;
            }
            else{
                if(prev)
                prev->next=start;
                prev=curr;
                if(curr)
                curr=curr->next;
                start=curr;
            }
            count++;

            }
            return head;
        }
    
};