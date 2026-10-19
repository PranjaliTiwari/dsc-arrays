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
    ListNode* middleNode(ListNode* head) {
         ListNode* temp =head;
         int mid=0;
         int c=0;
         while(temp!=NULL){
            c++;
            temp=temp->next;
         }
         temp=head;
         if(c%2==0){
          mid=(c/2)+1;
         }
         else 
         mid=(c+1)/2;
         int i=1;
          while(i<mid){
            temp=temp->next;
            i++;
          }
          return temp;
         }
    
};