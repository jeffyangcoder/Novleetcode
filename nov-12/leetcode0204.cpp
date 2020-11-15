/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small=new ListNode(1);
        ListNode* p1=small,*big=new ListNode(1),*p2=big;

        while(head)
        {
            if(head->val>=x)
            {
                ListNode* t=new ListNode(head->val);
                big->next=t;
                big=big->next;
            }
            else
            {
                ListNode* t=new ListNode(head->val);
                small->next=t;
                small=small->next;
            }
            head=head->next;
        }

        small->next=p2->next;

        return p1->next;
    }
};
