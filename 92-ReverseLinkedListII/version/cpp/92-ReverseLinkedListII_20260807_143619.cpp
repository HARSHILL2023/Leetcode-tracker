// Last updated: 8/7/2026, 2:36:19 PM
1class Solution {
2public:
3    ListNode* reverseBetween(ListNode* head, int left, int right) {
4        if (!head || left == right) return head;
5
6        ListNode* dummy = new ListNode(0);
7        dummy->next = head;
8        ListNode* prev = dummy;
9
10        for (int i = 1; i < left; ++i) {
11            prev = prev->next;
12        }
13
14        ListNode* curr = prev->next;
15        for (int i = 0; i < right - left; ++i) {
16            ListNode* temp = curr->next;
17            curr->next = temp->next;
18            temp->next = prev->next;
19            prev->next = temp;
20        }
21
22        ListNode* result = dummy->next;
23        delete dummy;
24        return result;
25    }
26};