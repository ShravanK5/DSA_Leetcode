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
    void reorderList(ListNode* head) {
        //step1 calculate mid using slow and fast 
        ListNode * slow = head;
        ListNode * fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        //creating second list ie splitting the list into half 
        ListNode * second = slow->next;
        slow->next = NULL;

        //step2 mid se aage wali ll ko reverse karo
        ListNode * curr = second;
        ListNode * prev = NULL;
        ListNode * next = NULL;        

        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
            second = prev; // second revered ll
            ListNode * first = head ; // first ll until mid


        // merge in such a way ek elemnet first element ka 2nd element dusre ll ka 

        while(second != NULL)
        {
            ListNode * temp1 = first->next;
            ListNode * temp2 = second -> next;

            first -> next = second;
            second -> next = temp1;

            first = temp1;
            second = temp2;
        }

    }
};