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

Node * reverse_a_ll(Node *head){
   if(head==nullptr || head->next==nullptr){
    return head;
   }

   Node *newhead=reverse_a_ll(head->next);

   Node *front=head->next;
   front->next=head;
   head->next=nullptr;

   return newhead;
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

    Node *res=reverse_a_ll(head);
    cout<<"after reversing LL is "<<endl;
    print_ll(res);

    return 0;
}