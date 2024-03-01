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
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* oddHead = NULL, *oddTail = NULL, *evenHead = NULL, *evenTail = NULL;

        ListNode* curr = head;
        int i = 1;
        while(curr != NULL){
            if(i%2 != 0){
                if(oddHead == NULL){
                    oddHead = curr;
                    oddTail = curr;
                }
                else{
                    oddTail -> next = curr;
                    oddTail = curr;
                }
            }
            else{
                if(evenHead == NULL){
                    evenHead = curr;
                    evenTail = curr;
                }
                else{
                    evenTail -> next = curr;
                    evenTail = curr;
                }
            }
            i++;
            curr = curr -> next;
        }

        // For head = 1 -> 2 -> 3 -> 4 ->5 -> NULL

        // oddHead = 1 -> 3 -> 5->NULL
        //                     Tail 
        // evenHead = 2-> 4 -> 5 -> NULL (here evenTail->next is on 4, so make it's next NULL)
        //                Tail  

        if(oddTail -> next == NULL){
            evenTail -> next = NULL;
        }
        else{
            oddTail -> next = NULL;
        }

        

        oddTail->next = evenHead;
        return oddHead;
    }
};
