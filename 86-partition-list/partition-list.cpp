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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL) return NULL;
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> res;
        for(int i = 0; i<ans.size(); i++) {
            if(ans[i] < x) {
                res.push_back(ans[i]);
            }
        }
        for(int i = 0; i<ans.size(); i++) {
            if(ans[i] >= x) {
                res.push_back(ans[i]);
            }
        }
        ListNode* node = new ListNode(res[0]);
        ListNode* t = node;
        for(int i = 1; i<res.size(); i++) {
            t->next = new ListNode(res[i]);
            t = t->next;
        }
        return node;
    }
};