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
         map<ListNode* , int> map;
           while(headA!=nullptr)
    {
            map[headA]=0;
            headA=headA->next;
    }
    while(headB!=nullptr){
        if(map.count(headB)==1){
            return headB;
        }
        headB=headB->next;
    }
    return nullptr;
    }
};