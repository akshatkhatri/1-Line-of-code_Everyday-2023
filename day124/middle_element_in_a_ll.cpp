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

Node *findMiddle(Node *head) {
    // Write your code here
int n = 0;
    	Node* temp = head;
    	while(temp) {
        	n++;
        		temp = temp->next;
    	}
   	 
    	temp = head;
   	 
    	for(int i = 0; i < n / 2; i++) {
        		temp = temp->next;
    	}
   	 
    	return temp;
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

    Node *res=findMiddle(head);
    cout<<"middle element is "<<endl;
    cout<<res->data<<endl;

    return 0;
}