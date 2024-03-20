//Link to the question
//https://www.codingninjas.com/studio/problems/reverse-a-doubly-linked-list_1116098?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

Node* reverseDLL(Node* head) {   
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    Node* prev = nullptr;
    Node* current = head;

    while (current != nullptr) {
        // Swap previous and next pointers
        Node* nextNode = current->next;
        current->next = prev;
        current->prev = nextNode;

        // Move pointers one position ahead
        prev = current;
        current = nextNode;
    }


    return prev;
}
