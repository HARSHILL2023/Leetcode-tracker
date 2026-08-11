// Last updated: 8/11/2026, 2:02:35 PM
1class Solution {
2public:
3    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
4        unordered_set<int> st(nums.begin(), nums.end());
5
6       
7        while (head != nullptr && st.count(head->val)) {
8            head = head->next;
9        }
10
11        
12        ListNode* curr = head;
13        while (curr != nullptr && curr->next != nullptr) {
14            if (st.count(curr->next->val)) {
15                curr->next = curr->next->next;
16            } else {
17                curr = curr->next;
18            }
19        }
20
21        return head;
22    }
23};