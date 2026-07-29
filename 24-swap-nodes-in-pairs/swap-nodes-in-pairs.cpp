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
void swapNode(ListNode* prev, ListNode* i,  ListNode* j, ListNode* &head) {

    if(i == NULL || j == NULL) {
       return;
    }
    ListNode* curr = j->next;
    if(prev==NULL) {
        head = j;
    } else {
        prev->next = j;
    }
      j->next = i;
      
      i->next = curr;

     swapNode(i,curr, curr ? curr->next : NULL, head); 


}
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        // ListNode* i = head;
        //  ListNode* j = head->next;
        // // head->next = swapPairs(j->next);
        // j->next = head;
        //  return j;
        swapNode(NULL , head, head->next, head);
        return head;
    }
};