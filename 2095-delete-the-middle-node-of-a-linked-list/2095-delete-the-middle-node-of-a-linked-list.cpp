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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            head=NULL;
            return head;
        }
        ListNode *tmp=head;
        int count=0;
        while(tmp){
            count++;
            tmp=tmp->next;
        }
        tmp=head;
        ListNode *prev=NULL;
        count=count/2;
        while(count--){
            prev=tmp;
            tmp=tmp->next;
        }
        prev->next=tmp->next;
        return head;
    }
};