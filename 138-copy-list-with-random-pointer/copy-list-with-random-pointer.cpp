/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *newHead=NULL,*newTail=NULL;
        map<Node*,Node*>mp;
        Node *curr,*curr2;
        for(Node *curr=head;curr;curr=curr->next){
            Node *newNode=new Node(curr->val);
            mp[curr]=newNode;
            if(newHead==NULL){
                newHead=newTail=newNode;
            }
            else
            newTail=newTail->next=newNode;
        }
        for(curr=head,curr2=newHead;curr;curr=curr->next,curr2=curr2->next){
            curr2->random=mp[curr->random];
        }
        return newHead;



        }

};