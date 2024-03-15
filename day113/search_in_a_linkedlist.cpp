#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data1){
        data=data1;
    }

    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }
};

bool search_in_linkedlist(Node *head,int target){
    Node *temp=head;

    while(temp){

        if(temp->data==target){
            return true;
        }

        temp=temp->next;
    }

    return false;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int val = 3;  // Element to be checked for presence in the linked list

    // Call the checkifPresent function and print the result
    cout << (search_in_linkedlist(head, val) ? "true" : "false") << '\n';;

    return 0;  // Return 0 to indicate successful execution
}