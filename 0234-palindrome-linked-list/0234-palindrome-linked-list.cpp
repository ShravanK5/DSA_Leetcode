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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow= slow->next;
        }
        // reverse
        ListNode* prev = NULL;
        ListNode* next = slow;
        ListNode* curr = slow;

        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode * first = prev;
        ListNode* second = head;

        while(first != NULL)
        {
            if(first-> val == second->val)
            {
                first = first -> next;
                second = second->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};