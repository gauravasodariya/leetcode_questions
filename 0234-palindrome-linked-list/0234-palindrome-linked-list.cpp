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
    bool isPalindrome(ListNode* head)
    {
        if(head->next==NULL)
        {
            return 1;
        }
        ListNode *curr=head;
        int count=0;
        while(curr)
        {
            count++;
            curr=curr->next;
        }    
        count=count/2;
        ListNode *prev=NULL;
        curr=head;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode *fut;
        prev=NULL;
        while(curr!=NULL)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        ListNode *head1=head,*head2=prev;
        while(head1)
        {
            if(head1->val!=head2->val)
            {
                return 0;
            } 
            else
            {
                head1=head1->next;
                head2=head2->next;
            }
        }
        return 1;
    }
};