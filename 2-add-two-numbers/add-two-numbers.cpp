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
void insertAttail(ListNode* &head, ListNode* &tail, int val) {
 ListNode* temp = new ListNode(val);
 if(head == NULL) {
    head = temp;
    tail = temp;
 } else {
    tail->next = temp;
    tail = temp;
 }
}
ListNode* add(ListNode* f, ListNode* s) {
    int carry = 0;
    ListNode* ansh = NULL;
    ListNode* anst = NULL;
  while(f != NULL && s!=NULL) {
    int sum = carry + f->val + s->val;
    int digit = sum%10;
    insertAttail(ansh, anst, digit);
    carry = sum/10;
    f = f->next;
    s = s->next;
  }
   while(f != NULL) {
    int sum = f->val + carry;
    int digit = sum%10;
    insertAttail(ansh, anst, digit);
    carry = sum/10;
    f = f->next;
  }
   while(s!=NULL) {
    int sum = carry + s->val;
    int digit = sum%10;
    insertAttail(ansh, anst, digit);
    carry = sum/10;
    s = s->next;
  }
   while(carry != NULL) {
    int sum = carry;
    int digit = sum%10;
    insertAttail(ansh, anst, digit);
    carry = sum/10;
  }
  return ansh;

}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* ans = add(l1, l2);
      return ans;
    }
};