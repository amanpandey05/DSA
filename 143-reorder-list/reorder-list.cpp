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
    void reorderList(ListNode* head) {
       deque<int> q;
       ListNode* t = head;
       while(t!=NULL) {
        q.push_back(t->val);
        t = t->next;
       } 

      t = head;

      while(!q.empty()) {
        int nodef = q.front();
        q.pop_front();
        t->val = nodef;
        t = t->next;
      if(!q.empty()) { int nodeb = q.back();
        q.pop_back();
        t->val = nodeb;
        t = t->next;}

      }
       
    }
};