class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      
        while (head != nullptr && head->val == val) {
            ListNode* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
        }


        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val == val) {
                ListNode* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};