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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int count=0;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        int x=k;
        ListNode *curr1=head;
        ListNode *curr2=head;
        while(--x)
        {
            curr1=curr1->next;
        }
        k=count-k;
        while(k--)
        {
            curr2=curr2->next;
        }
        x=curr2->val;
        curr2->val=curr1->val;
        curr1->val=x;
        return head;
    }
};