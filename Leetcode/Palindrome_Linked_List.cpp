/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Link to problem: https://leetcode.com/problems/palindrome-linked-list/
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *ptr=head;
        if(ptr==NULL){
            return true;
        }
        vector<int>v;
        while(ptr->next!=NULL){
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        v.push_back(ptr->val);
        vector<int>v2=v;
        reverse(v.begin(),v.end());
        if(v2==v){
            return true;
        }
        return false;
    }
};