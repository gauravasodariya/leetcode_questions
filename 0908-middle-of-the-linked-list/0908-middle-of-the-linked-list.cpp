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
    ListNode* middleNode(ListNode* head)
    {
        ListNode *tmp=head;
        int count=0;
        while(tmp!=NULL)
        {
            count++;
            tmp=tmp->next;
        }
        count=count/2;
        tmp=head;
        while(count--)  
        {
            tmp=tmp->next;
        }  
        return tmp;
    }
};