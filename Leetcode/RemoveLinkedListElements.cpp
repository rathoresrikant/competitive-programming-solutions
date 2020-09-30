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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return NULL;

        ListNode *tmp = head, *p;

        while (tmp->next != NULL)
        {
            if (tmp->next->val == val)
            {
                p = tmp->next;
                tmp->next = tmp->next->next;
                delete p;
            }
            else
                tmp = tmp->next;
        }
        while (head && head->val == val)
        {
            tmp = head;
            head = head->next;
            delete tmp;
        }
        return head;
    }
};