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
    int kthToLast(ListNode* head, int k) {
        if (! head)
            return -1;
        int leng = 0;
        ListNode* son = head;
        while(son -> next != NULL)
        {
            leng ++;
            son = son -> next;
        }
        leng ++;
        son = head;
        for(int i = 0;i < leng - k; k++)
        {
            son = son -> next;
        }
        return son -> val;
    }
};
