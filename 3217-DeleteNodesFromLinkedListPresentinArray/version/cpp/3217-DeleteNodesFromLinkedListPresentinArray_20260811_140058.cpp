// Last updated: 8/11/2026, 2:00:58 PM
1class Solution {
2public:
3    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
4      
5        unordered_set<int> st(nums.begin(), nums.end());
6
7      
8        ListNode dummy(0, head);
9        ListNode* curr = &dummy;
10
11    
12        while (curr->next != nullptr) {
13            if (st.count(curr->next->val)) {
14               
15                curr->next = curr->next->next;
16            } else {
17   
18                curr = curr->next;
19            }
20        }
21
22        return dummy.next;
23    }
24};