/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     Node *next;
 *     Node() : val(0), next(nullptr) {}
 *     Node(int x) : val(x), next(nullptr) {}
 *     Node(int x, Node *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode *first=new ListNode(0);
        first->next=head;
        head=first;
        int x;
        ListNode *prev,*curr,*second,*front;
        while(first->next!=NULL)
        {
            x=k;
            ListNode *check=first->next;
            int count=0;
            while(check && count<k)
            {
                count++;
                check=check->next;
            }
            if(count<k)
            {
                break;
            }
            second=first->next;
            prev=first;
            curr=first->next;
            while(x && curr)
            {
                front=curr->next;
                curr->next=prev;
                prev=curr;
                curr=front;
                x--;
            }
            first->next=prev;
            second->next=curr;
            first=second;
        }
        first=head;
        head=head->next;
        delete(first);
        return head;
    }   
};