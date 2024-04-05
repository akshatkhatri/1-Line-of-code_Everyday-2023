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
    ListNode *reverse_a_ll(ListNode *head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr != nullptr) {
            ListNode *nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {

        if(head==nullptr || head->next==nullptr){
            return true;
        }

        if (head->next->next == nullptr) {
            return head->val == head->next->val;
        }

        // first we'll find the middle point of the ll

        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *temp=nullptr;
        ListNode *temp2=nullptr;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode *new_head=reverse_a_ll(slow->next);
        // slow->next=nullptr;

        //compare both halces
        temp=head;
        temp2=new_head;

        while(temp!=nullptr && temp2!=nullptr){
            if(temp->val !=temp2->val){
                ListNode *dummy=reverse_a_ll(new_head);
                return false;
            }

            temp=temp->next;
            temp2=temp2->next;
        }

        slow->next=reverse_a_ll(new_head);
        return true;


    }
};


//Brute-force

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int>my_stack;
        Node*temp=head;
        
        while(temp){
            my_stack.push(temp->data);
            temp=temp->next;
        }
        
        temp=head;
        
        while(temp){
            int popped=my_stack.top();
            my_stack.pop();
            
            if(popped!=temp->data){
                return false;
            }
            
            temp=temp->next;
        }
        
        return true;
        
    }
};