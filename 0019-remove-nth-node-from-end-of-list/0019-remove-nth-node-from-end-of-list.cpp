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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        int len = 0;
        if (head->next== NULL) {
            return NULL;
        }
        ListNode* temp = head;

        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        count = len - n;

        ListNode* curr = head;
        ListNode* prev = head;

        while (count > 0) {
            prev = curr;
            curr = curr->next;
            count--;
        }
        if(prev == curr)
        {
            head = head->next;
            return head;
        }
        prev->next = curr->next;
        return head;
    }
};