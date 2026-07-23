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

        if(head == NULL || head->next == NULL)
        return NULL;
        
        ListNode* temp = head;
        int len =0 ;
        while(temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        int count = len /2;
        
        
            ListNode* curr = head;
            ListNode* prev = head;
        
        
        while(count > 0)
        {
            prev = curr;
            curr= curr->next; 
            count--;
        }
                
        prev->next = curr->next;
        curr->next = NULL;
        return head;
    }
};