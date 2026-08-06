// Last updated: 8/6/2026, 4:15:59 PM
1class Solution {
2public:
3    ListNode* swapPairs(ListNode* head) {
4        ListNode dummy(0, head);
5        ListNode* prev = &dummy;
6        
7        while (prev->next && prev->next->next) {
8            ListNode* first = prev->next;
9            ListNode* second = prev->next->next;
10            
11            // Swap pointers
12            first->next = second->next;
13            second->next = first;
14            prev->next = second;
15            
16            // Move pointer forward for the next pair
17            prev = first;
18        }
19        
20        return dummy.next;
21    }
22};