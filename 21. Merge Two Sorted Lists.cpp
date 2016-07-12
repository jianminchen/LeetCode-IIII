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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        while (l1 != NULL && l2 != NULL)
        {
            ListNode *temp = NULL;
            if (l1->val < l2->val)
            {
                temp = l1;
                l1 = l1->next;
            }
            else
            {
                temp = l2;
                l2 = l2->next;
            }
            p->next = temp;
            p = temp;
        }
        if (l1 != NULL)
            p->next = l1;
        if (l2 != NULL)
            p->next = l2;
        return dummy->next;
    }
};
