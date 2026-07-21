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
private:
    ListNode * insertAtTail( ListNode * & head , ListNode * & tail, int digit)
    {
        ListNode * temp = new ListNode(digit);

        if(head == NULL && tail == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = tail->next;
        }
        return head;
    }

    ListNode * solve(ListNode* l1, ListNode* l2)
    {
        ListNode * ansHead = NULL;
        ListNode * ansTail = NULL;
        int carry = 0;

        while( l1 != NULL && l2 != NULL)
        {
            int sum = carry + l1->val + l2->val;
            int digit = sum % 10;
            insertAtTail(ansHead , ansTail , digit);
            carry = sum / 10;

            l1 = l1->next;
            l2 = l2->next;
        }

        //while l1 is not finished 
        while( l1 != NULL )
        {
            int sum = carry + l1->val ;
            int digit = sum % 10;
            insertAtTail(ansHead , ansTail , digit);
            carry = sum / 10;

            l1 = l1->next;
        }
        //while l2 is not finished 
        while( l2 != NULL)
        {
            int sum = carry + l2->val;
            int digit = sum % 10;
            insertAtTail(ansHead , ansTail , digit);
            carry = sum / 10;

            l2 = l2->next;
        }
        // while carry is nort finished
        while(carry != 0)
        {
            int sum = carry ;
            int digit = sum % 10;
            insertAtTail(ansHead , ansTail , digit);
            carry = sum / 10;
        }

        return ansHead;
    }

    ListNode* reverse(ListNode* head) {
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * next = NULL;

        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev= curr;
            curr = next;
        }
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // step 1 reverse l1 and reverse l2
        l1 = reverse(l1);
        l2 = reverse(l2);

        //step 2 ans caluculate karo 

        ListNode * ans = solve(l1,l2);

        //reverse ans
        ans = reverse(ans);
        return ans;
    }
};