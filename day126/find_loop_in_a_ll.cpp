#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        this->data = data1;
        this->next = next1;
    }

    Node(int data1)
    {
        this->data = data1;
        this->next = nullptr;
    }
};

bool detect_loop(Node *head)
{
    Node *temp = head;

    unordered_set<Node *> Nodeset;

    while (temp != nullptr)
    {
        if (Nodeset.find(temp) != Nodeset.end())
        {
            return true;
        }

        Nodeset.insert(temp);
        temp = temp->next;
    }

    return false;
}

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; // a loop in a ll statement

    if (detect_loop(head))
        cout << "loop detected in a LL" << endl;
    else
        cout << "no loop is detected" << endl;

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}