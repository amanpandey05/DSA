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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        ListNode* t = head;
        while(t != NULL) {
            arr.push_back(t->val);
            t = t->next;
        } 
        if(arr.empty()) return NULL;
        ListNode* res = new ListNode(arr[0]);
        ListNode* curr = head;
        for(int i = 1; i<arr.size(); i++) {
            if(i % 2 == 0) {
                curr->next = new ListNode(arr[i]);
                curr = curr->next;
            }
        }
        for(int i = 1; i<arr.size(); i++) {
            if(i % 2 == 1) {
                curr->next = new ListNode(arr[i]);
                curr = curr->next;
            }
        }
        return head;
    }
};