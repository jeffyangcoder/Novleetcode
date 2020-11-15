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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dumhead = new ListNode(0);
        dumhead->next = head;
        ListNode* temp = dumhead;
        
        while (temp->next->next != nullptr && temp->next != nullptr) 
        {
            ListNode* node1 = temp->next;
            ListNode* node2 = temp->next->next;

            temp->next = node2;
            node1->next = node2->next;
            node2->next = node1;
            temp = node1;
        }

        return dumhead->next;
    }
};
