/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    RandomListNode* tmp = A;
    unordered_map<RandomListNode*, RandomListNode*>mp;
    
    while(tmp!=nullptr){
        auto flag = new RandomListNode(tmp->label);
        mp[tmp] = flag;
        tmp = tmp->next;
    }
    tmp = A;
    while(tmp!=nullptr){
        mp[tmp]->next = mp[tmp->next];
        mp[tmp]->random = mp[tmp->random];
        tmp = tmp->next;
    }
    return mp[A];
}
