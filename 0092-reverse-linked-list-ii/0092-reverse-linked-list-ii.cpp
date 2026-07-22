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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        

        //step 1 go until the left u need to pointer preslow and slow to reverse and connect

        int pos =1;
    ListNode * slow = head;
    ListNode * preslow = head;
        while( pos != left)
        {
            preslow = slow;
            slow = slow->next;
            pos++;
        }

        //step 2 now reverse the number of nodes 
        //number of nopdes to be reversed can be find out using right - left +1

        int count = right - left +1;

        ListNode* curr = slow;
        ListNode * prev = NULL;
        ListNode * next = NULL;

        while(count >0)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

            count--;
        }

        //now we have prev pointing to start of reversed array and slow pointing to the first element of unreversed ll ie to the last node pf reversed ll

        // so wee coonect prev to pre slow nd the last element of reversed slow to next bcoz next contains the next elemnet data which wasnt supposed to reverse

        if(left ==1)
        {
            head= prev;
        }
        else{
            preslow ->next = prev;
        }
        slow->next = next;

        return head;
    }
};