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
    ListNode* swapNodes(ListNode* head, int k) {
     vector<int> arr;
        ListNode* t = head;
        while(t!= NULL) {
            arr.push_back(t->val);
            t = t->next;
        }
   int i = k-1;
   int j = arr.size()-k;
   swap(arr[i], arr[j]);
   ListNode* ans = new ListNode(arr[0]);
   ListNode* temp = ans;
   for(int i = 1; i<arr.size(); i++) {
temp->next = new ListNode(arr[i]);
temp = temp->next;
   }
   return ans;
    }
};