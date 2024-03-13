#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    public:
    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

int main(){
    vector<int>arr={2,3,4,7,5};
    Node *new_node=new Node(arr[0]);
    cout<<new_node<<endl;
    cout<<new_node->data<<endl;
    cout<<new_node->next<<endl;
}