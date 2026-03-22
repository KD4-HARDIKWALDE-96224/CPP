#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class List
{
    Node* head;
public:
    List(){ head = NULL; }

    void add_first(int val)
    {
        Node* n = new Node;
        n->data = val;
        n->next = head;
        head = n;
    }

    void add_last(int val)
    {
        Node* n = new Node;
        n->data = val;
        n->next = NULL;

        if(head == NULL)
            head = n;
        else
        {
            Node* temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = n;
        }
    }
};