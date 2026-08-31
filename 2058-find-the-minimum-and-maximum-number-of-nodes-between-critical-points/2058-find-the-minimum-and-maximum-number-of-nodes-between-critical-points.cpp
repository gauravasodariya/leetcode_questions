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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev=head;
        ListNode *curr=head->next;
        int firstCriticalpoint=0;
        int previousCritialpoint=0;
        int minDistance=INT_MAX;
        int i=1;
        while(curr->next!=NULL){
            if(prev->val<curr->val && curr->next->val<curr->val ||     prev->val>curr->val && curr->next->val>curr->val){
                if(firstCriticalpoint==0){
                    firstCriticalpoint=i;
                    previousCritialpoint=i;
                }
                else{
                    minDistance=min(minDistance,i-previousCritialpoint);
                    previousCritialpoint=i;
                }
            }
            prev=curr;
            i++;
            curr=curr->next;
        }
        if(minDistance==INT_MAX){
            return {-1,-1};
        }
        return {minDistance,previousCritialpoint-firstCriticalpoint};
    }
};