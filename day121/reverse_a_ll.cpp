#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data1){
        this->data=data1;
        this->next=nullptr;
    }
};

Node * convert_arr_to_ll(vector<int>nums){
    if(nums.empty()){
        return nullptr;
    }

    Node *temp=new Node(nums[0]);
    Node *head=temp;

    for(int i=1;i<nums.size();i++){
        temp->next=new Node(nums[i]);
        temp=temp->next;
    }

    return head;
}

void reverse_a_ll(Node *head){
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

        temp->data=popped;
        temp=temp->next;
    }
}

void print_ll(Node *head){
    Node *temp=head;

    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"END"<<endl;
}
int main(){
    vector<int>nums={2,5,6,4,7,10};

    Node *head=convert_arr_to_ll(nums);
    cout<<"original LL is"<<endl;
    print_ll(head);

    reverse_a_ll(head);
    cout<<"after reversing LL is "<<endl;
    print_ll(head);

    return 0;
}