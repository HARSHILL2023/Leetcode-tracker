// Last updated: 8/13/2026, 1:35:47 PM
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
13    vector<int> nextLargerNodes(ListNode* head) {
14        ListNode*temp=head;
15       
16        vector<int> ans;
17        while(temp!=nullptr){
18         ans.push_back(temp->val);
19         temp=temp->next;
20        }
21            for(int i=0;i<ans.size();i++){
22                 bool isbig = false;
23               
24                for(int j=i+1;j<ans.size();j++){
25                    
26                    if(ans[i]<ans[j]){
27                        ans[i]=ans[j];
28                        isbig=true;
29                        break;
30                    }
31                
32                }
33                if(!isbig){
34                    ans[i]=0;
35                }
36            }
37        return ans;
38    }
39};