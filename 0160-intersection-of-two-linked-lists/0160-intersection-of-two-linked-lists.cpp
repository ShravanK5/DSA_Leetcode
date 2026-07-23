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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // unordered_map<ListNode* , int> mpp;
        // ListNode* temp = headA;
        // ListNode* temp2 = headB;

        // while(temp != NULL)
        // {
        //     mpp[temp]=1;
        //     temp = temp->next;
        // }

        // while(temp2 != NULL)
        // {
        //     if(mpp.find(temp2) != mpp.end())
        //     {
        //         return temp2;
        //     }
        //     else{
        //         temp2 = temp2->next;
        //     }
        // }
        // return NULL;

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        while( t1 != t2)
        {
            t1 = t1->next;
            t2= t2->next;

            if(t1 == t2)
            return t1;

            if(t1 == NULL)
            t1 = headB;

            if(t2 == NULL)
            t2 = headA;
        }
        return t1;
    }

};