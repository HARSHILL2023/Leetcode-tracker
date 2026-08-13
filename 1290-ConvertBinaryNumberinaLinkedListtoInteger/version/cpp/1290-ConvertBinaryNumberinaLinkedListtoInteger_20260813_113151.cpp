// Last updated: 8/13/2026, 11:31:51 AM
1class Solution {
2public:
3    int getDecimalValue(ListNode* head) {
4        int ans = 0;
5        while (head != nullptr) {
6            ans = ans * 2 + head->val;
7            head = head->next;
8        }
9        return ans;
10    }
11};