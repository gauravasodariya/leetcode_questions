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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *curr=head,*prev=NULL;  
        int count=0;  
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        count=count-n;
        curr=head;
        if(count==0)
        {
            ListNode *tmp=head;
            head=head->next;
            delete tmp;
            return head;
        }
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};