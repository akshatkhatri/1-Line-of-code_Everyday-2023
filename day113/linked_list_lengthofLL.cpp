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

int LengthofLinked_list(Node *head){
    int count=0;
    if(head==nullptr){
        return count;
    }

    Node *temp=head;

    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }

    return count;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    
    // Create a linked list
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    // Print the length of the linked list
    cout << LengthofLinked_list(head) << '\n';
}