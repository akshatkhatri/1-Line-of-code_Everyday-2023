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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        int count=0;
        ListNode *temp=head;

        while(temp){
            count++;
            temp=temp->next;
        }

        if (count == n) {
        ListNode* newhead = head->next;
        delete (head);
        return newhead;
    }

        int counter=0;
        temp=head;

        while(counter<(count-n-1)){
            counter++;
            temp=temp->next;
        }

        ListNode *delnode=temp->next;

        if (delnode != nullptr) {
            temp->next = temp->next->next;
            delete delnode;
        }
        // temp->next=temp->next->next; 

        return head;

    }
};