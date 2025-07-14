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
    int getDecimalValue(ListNode* head) 
    {
        ListNode *tmp=head;
        string s="";
        while(tmp!=NULL)
        {
            s=s+to_string(tmp->val);
            tmp=tmp->next;
        }
        int total=0;
        int power=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                total+=power;
            }
            power*=2;
        }
        return total;
    }
};