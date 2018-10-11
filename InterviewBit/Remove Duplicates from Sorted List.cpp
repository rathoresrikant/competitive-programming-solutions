/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *temp = A;
    ListNode *temporary;
    
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->val==temp->next->val)
        {
            temporary = temp->next;
            temp->next = temp->next->next;
            free(temporary);
            continue;
        }
        temp= temp->next;
    }
    return A;
}
