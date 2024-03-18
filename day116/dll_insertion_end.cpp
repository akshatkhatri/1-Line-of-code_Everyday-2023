using namespace std;
#include<bits/stdc++.h>

class Node {
public:
    int data;       
    Node* next;     
    Node* prev;   

    
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;  
        prev = back1;
    }   
    Node(int data1) {
        data = data1;
        next = nullptr; 
        prev = nullptr; 
    }
};

Node * convert_arr_to_dll(int arr[],int n){
    Node *head=new Node(arr[0]);
    Node *prev=head;

    for(int i=1;i<n;i++){
        Node *temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }

    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        // Print the data in the tail node
        cout << head->data << " ";  
         // Move to the next node
        head = head->next;         
    }
}

Node * insert_at_tail(Node *head,int data1){
    Node *temp=head;
    Node *new_node=new Node(data1);

    if(head==nullptr){
        return new_node;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }

    temp->next=new_node;

    new_node->prev=temp;
    new_node->next=nullptr;

    return head;
}

int main() {
    int arr[] = {12, 5, 8, 7, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    cout<<size<<endl;
    Node* head = convert_arr_to_dll(arr,size);

cout << "Doubly Linked List Initially: " << endl;
    print(head);


    cout << endl << "Doubly Linked List After Inserting at the tail with value 10: " << endl;
     // Insert a node with value 10 at the end
    head = insert_at_tail(head, 10);
    print(head);

    return 0;
}