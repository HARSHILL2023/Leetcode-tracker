// Last updated: 8/13/2026, 11:52:26 AM
1class Solution {
2public:
3    ListNode* removeElements(ListNode* head, int val) {
4      
5        while (head != nullptr && head->val == val) {
6            ListNode* nodeToDelete = head;
7            head = head->next;
8            delete nodeToDelete;
9        }
10
11
12        ListNode* temp = head;
13        while (temp != nullptr && temp->next != nullptr) {
14            if (temp->next->val == val) {
15                ListNode* nodeToDelete = temp->next;
16                temp->next = temp->next->next;
17                delete nodeToDelete;
18            } else {
19                temp = temp->next;
20            }
21        }
22
23        return head;
24    }
25};