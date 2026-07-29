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
// void swapNode( ListNode* i,  ListNode* j, ListNode* head) {
//     if(head == NULL) return;
//     i = head;
//     j = head->next;
//     if(i == NULL || j == NULL) {
//       return;
//     }
//     ListNode* curr = i;
//       i->next = j->next;
//       j->next = curr;
//      swapNode(i, j, head); 
//      i = i->next;
//      j = j->next;

// }
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        // ListNode* i = head;
         ListNode* j = head->next;
        head->next = swapPairs(j->next);
        j->next = head;
         return j;
    }
};