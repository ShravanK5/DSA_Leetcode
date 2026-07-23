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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp = head;
        ListNode* tail = head;
        int len = 1;

        if(head == NULL || head->next == NULL || k == 0)
        return head;

        while( tail->next != NULL)
        {
            len++;
            tail= tail->next; 
        }
        if(k % len ==0)
        return head;

        tail->next = head;

        k = k % len;
        int count = len -k;

        ListNode* curr = head;
        ListNode* prev = head;

        while(count > 0 )
        {
            prev = curr;
            curr = curr->next;
            count--;
        }
        head= curr;
        prev->next = NULL;
        return head;
    }
};