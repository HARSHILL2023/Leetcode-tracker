/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode*temp=head;
       
        vector<int> ans;
        while(temp!=nullptr){
         ans.push_back(temp->val);
         temp=temp->next;
        }
            for(int i=0;i<ans.size();i++){
                 bool isbig = false;
               
                for(int j=i+1;j<ans.size();j++){
                    
                    if(ans[i]<ans[j]){
                        ans[i]=ans[j];
                        isbig=true;
                        break;
                    }
                
                }
                if(!isbig){
                    ans[i]=0;
                }
            }
        return ans;
    }
};