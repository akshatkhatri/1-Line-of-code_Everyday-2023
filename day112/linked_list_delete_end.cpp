//solved the following LeetCode medium level problem too 
//https://leetcode.com/problems/delete-node-in-a-linked-list/

#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    Node *next;

    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }

};

void printLL(Node* head) {

    if(head==nullptr){
        cout<<"empty Linked List"<<endl;
    }

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node * deleteTail(Node *head){
    Node *temp=head;

    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    while(temp){
        if(temp->next->next==nullptr){
            delete temp->next;
            temp->next=nullptr;
            break;
        }

        temp=temp->next;
    }

    return head;

}
int main() {
    // Initialize a vector with values for the linked list
    vector<int> arr = {12, 5, 8, 7};
    // Create a linked list with the values from the vector
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    // Call the deleteTail function to delete the last node
    head = deleteTail(head);
    // Print the linked list after deletion
    printLL(head);
}