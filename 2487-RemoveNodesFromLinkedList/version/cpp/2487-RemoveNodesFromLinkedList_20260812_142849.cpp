// Last updated: 8/12/2026, 2:28:49 PM
1class Solution {
2public:
3    ListNode* reverseList(ListNode* head) {
4        ListNode* prev = nullptr;
5        ListNode* curr = head;
6        while (curr != nullptr) {
7            ListNode* nextNode = curr->next;
8            curr->next = prev;
9            prev = curr;
10            curr = nextNode;
11        }
12        return prev;
13    }
14
15    ListNode* removeNodes(ListNode* head) {
16        if (!head) return nullptr;
17
18        head = reverseList(head);
19
20        ListNode* curr = head;
21        int maxVal = curr->val;
22
23        while (curr != nullptr && curr->next != nullptr) {
24            if (curr->next->val < maxVal) {
25                curr->next = curr->next->next;
26            } else {
27                curr = curr->next;
28                maxVal = curr->val; 
29            }
30        }
31
32        return reverseList(head);
33    }
34};