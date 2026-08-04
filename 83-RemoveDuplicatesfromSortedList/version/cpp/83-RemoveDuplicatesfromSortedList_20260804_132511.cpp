// Last updated: 8/4/2026, 1:25:11 PM
1
2class Solution {
3public:
4    ListNode* deleteDuplicates(ListNode* head) {
5        if(head==nullptr){
6            return head;
7        }
8        ListNode* current=head;
9
10        while(current->next != nullptr){
11            if(current->val == current->next->val){
12                ListNode* dup=current->next;
13                current->next=current->next->next;
14                delete dup;
15            }
16            else{
17                    current=current->next;
18            }
19        }
20        return head;
21    }
22};