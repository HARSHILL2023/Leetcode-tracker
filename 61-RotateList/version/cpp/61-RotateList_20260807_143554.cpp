// Last updated: 8/7/2026, 2:35:54 PM
1class Solution {
2public:
3    ListNode* rotateRight(ListNode* head, int k) {
4        if (!head || !head->next || k == 0) return head;
5
6        int length = 1;
7        ListNode* tail = head;
8        while (tail->next) {
9            tail = tail->next;
10            length++;
11        }
12
13        k = k % length;
14        if (k == 0) return head;
15
16        tail->next = head;
17
18        int stepsToNewTail = length - k;
19        ListNode* newTail = head;
20        for (int i = 1; i < stepsToNewTail; i++) {
21            newTail = newTail->next;
22        }
23
24        ListNode* newHead = newTail->next;
25        newTail->next = nullptr;
26
27        return newHead;
28    }
29};