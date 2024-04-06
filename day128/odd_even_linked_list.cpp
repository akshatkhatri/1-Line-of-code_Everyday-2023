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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        vector<int> dummy;
        ListNode* temp = head;

        // Traverse the list and push node values into the vector
        while (temp != nullptr) {
            dummy.push_back(temp->val);
            temp = temp->next->next;
        }



        // Reassign temp to head for traversing the list again
        temp = head->next;

        while(temp){
            dummy.push_back(temp->val);
            temp=temp->next->next;
        }

        temp=head;
        // Update node values with the values from the vector
        for (int i = 0; i < dummy.size(); i++) {
            temp->val = dummy[i];
            temp = temp->next;
        }

        return head;
    }
};
