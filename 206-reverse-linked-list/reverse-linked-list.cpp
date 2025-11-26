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
        ListNode * newHead=NULL,*newTail=NULL;
        ListNode * curr,*prev;
    while(head){
        prev=NULL;//find lastnode in list 
        curr=head;
        while(curr->next){
            prev=curr;
            curr=curr->next;
        }//upto this
        if(prev) prev->next=curr->next;
        else head=curr->next;
        if(newHead==NULL)
        newHead=newTail=curr;
        else
        newTail=newTail->next=curr;
        }
    return newHead;

    }
};