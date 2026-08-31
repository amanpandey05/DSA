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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr;
        if(head==NULL || head->next == NULL || head->next->next == NULL) {
            return {-1, -1};
        }
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* nxt = curr->next;
        int cnt = 1;
        while(nxt != NULL) {
         if(curr->val > prev->val && curr->val > nxt->val) {
            arr.push_back(cnt);
         }
         if(curr->val < prev->val && curr->val < nxt->val) {
            arr.push_back(cnt);
         }
         prev = curr;
         curr = nxt;
         nxt = nxt->next;
         cnt++;
        }
        int n = arr.size();
        if(n<=1) return{-1, -1};
        int mx = (arr[n-1]- arr[0]);
        int mini = INT_MAX;
       for(int i = 1; i<n; i++) {
         int d = arr[i]-arr[i-1];
         mini = min(mini, d);
       }
        return {mini, mx};
    }
};