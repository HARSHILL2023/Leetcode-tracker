// Last updated: 8/5/2026, 1:17:07 PM
1class Solution {
2public:
3    bool isPalindrome(ListNode* head) {
4        vector<int> arr;
5        ListNode* temp = head;
6        
7  
8        while (temp != nullptr) {
9            arr.push_back(temp->val);
10            temp = temp->next;
11        }
12
13        int i = 0;
14        int j = arr.size() - 1;
15
16       
17        while (i < j) {
18            if (arr[i] != arr[j]) {
19                return false; 
20            }
21            i++;
22            j--;
23        }
24        
25        return true;
26    }
27};