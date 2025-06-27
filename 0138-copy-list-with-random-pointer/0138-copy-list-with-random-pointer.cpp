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
    Node *check(Node *curr1,Node *curr2,Node *x)
    {
        if(x==NULL)
        {
            return NULL;
        }
        while(x!=curr1)
        {
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr2;
    }
    Node* copyRandomList(Node* head) 
    {
        Node *headcopy=new Node(0);
        Node *tailcopy=headcopy;
        Node *curr=head;
        while(curr!=NULL)
        {
            tailcopy->next=new Node(curr->val);
            curr=curr->next;
            tailcopy=tailcopy->next;
        }
        tailcopy=headcopy;
        headcopy=headcopy->next;
        delete(tailcopy);
        curr=head;
        tailcopy=headcopy;
        while(curr!=NULL)
        {
            tailcopy->random=check(head,headcopy,curr->random);
            tailcopy=tailcopy->next;
            curr=curr->next;
        }
        return headcopy;
    }
};