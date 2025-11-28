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
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            l1=reverseList(l1);
            l2=reverseList(l2);
            ListNode *head=NULL,*tail=NULL;
            int carry=0,sum=0;
            while(l1!=NULL&&l2!=NULL){
                sum=l1->val+l2->val+carry;
                carry=sum/10;
                sum=sum%10;
                ListNode * newNode=new ListNode(sum);
                if(head==NULL) head=tail=newNode;
                else tail=tail->next=newNode;
                l1=l1->next;
                l2=l2->next;
            }
            while(l1){
                sum=l1->val+carry;
                carry=sum/10;
                sum=sum%10;
                ListNode * newNode=new ListNode(sum);
                tail=tail->next=newNode;
                l1=l1->next;
            }
            while (l2) {
                sum = l2->val + carry;
                carry = sum / 10;
                sum %= 10;

                ListNode *newNode = new ListNode(sum);
                tail = tail->next = newNode;
                l2 = l2->next;
            }
            if (carry) {
                tail->next = new ListNode(carry);
            }

            return reverseList(head);
        }
    };
            

            
    