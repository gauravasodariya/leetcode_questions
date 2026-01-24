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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>nums;
        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
        sort(nums.begin(),nums.end());
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        for(int i=0;i<nums.size();i++){
            curr->next=new ListNode(nums[i]);
            curr=curr->next;
        }
        return dummy->next;
    }
};