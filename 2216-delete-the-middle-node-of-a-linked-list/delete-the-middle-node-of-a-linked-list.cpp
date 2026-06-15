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
    ListNode* deleteMiddle(ListNode* head) {
      if(head == NULL || head->next == NULL) {
        return NULL;
      }  
      ListNode* i = head;
      ListNode* j = head;
      ListNode* prev = NULL;
      while(j!=NULL && j->next!=NULL) {
        prev = i;
        i = i->next;
        j = j->next->next;
      }
      prev->next = i->next;
      delete i;
      return head;
    }
};