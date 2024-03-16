class Node {
public:
    int data;       
    Node* next;     
    Node* back;   

    
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;  
        back = back1;
    }   
    Node(int data1) {
        data = data1;
        next = nullptr; 
        back = nullptr; 
    }
};