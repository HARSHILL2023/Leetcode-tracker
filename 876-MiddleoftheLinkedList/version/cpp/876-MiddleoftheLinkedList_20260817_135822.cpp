// Last updated: 8/17/2026, 1:58:22 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* middleNode(ListNode* head) {
14        int count = 0;
15        ListNode* curr = head;
16        
17        
18        while (curr != nullptr) {
19            count++;
20            curr = curr->next;
21        }
22        
23      
24        curr = head;
25        for (int i = 0; i < count / 2; i++) {
26            curr = curr->next;
27        }
28        
29        return curr;
30    }
31};