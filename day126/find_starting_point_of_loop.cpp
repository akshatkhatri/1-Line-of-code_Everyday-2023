#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int val) {
            num = val;
            next = NULL;
        }
};

void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

void createCycle(node* &head,int pos) {
    node* ptr = head;
    node* temp = head;
    int cnt = 0;
    while(temp->next != NULL) {
        if(cnt != pos) {
            ++cnt;
            ptr = ptr->next;
        } 
        temp = temp->next;
    }
    temp->next = ptr;
}
//process as per mentioned in solution

    node *detectCycle(node *head) {
        node *fast=head;
        node *entry=head;
        node *slow=head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow){
                while(entry!=slow){
                    slow=slow->next;
                    entry=entry->next;
                }

                return entry;
            }
        }

        return nullptr;
    }


int main() {
    node* head = NULL;
    
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,3);
    insertNode(head,6);
    insertNode(head,10);
    
    createCycle(head,2);
    
    node* nodeRecieve = detectCycle(head);
    if(nodeRecieve == NULL) cout<<"No cycle";
    else {
        node* temp = head;
        int pos = 0;
        while(temp!=nodeRecieve) {
            ++pos;
            temp = temp->next;
        }
        cout<<"Tail connects at pos "<<pos<<endl;
    }
    
    return 0;
}
