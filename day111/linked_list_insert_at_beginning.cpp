#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int x){
        data=x;
        next=nullptr;
    }

};

void PrintList(Node *head){

    Node *temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout << "nullptr" << endl;
}

Node * InsertatFirst(int data,Node *head){
    Node *new_Node=new Node(data);
    new_Node->next=head;
    head=new_Node;

    return head;
}

int main() {
  Node * head = NULL; // head of the LinkedList
  head = InsertatFirst(40, head);
head = InsertatFirst(30, head);
head = InsertatFirst(20, head);
head = InsertatFirst(10, head);
cout << "LinkedList before inserting 0 at beginning : " << endl;
PrintList(head);
head = InsertatFirst(0, head);
cout << "LinkedList after inserting 0 at beginning : " << endl;
PrintList(head);

  return 0;
}