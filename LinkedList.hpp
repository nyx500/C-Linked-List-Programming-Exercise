#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

class LinkedList{
    
private:
    /*Singly-linked list NODE: one data field and one 'next' pointer to the next node */
    struct Node{
        int data;
        Node* next;
    };

    Node* head = NULL;
    
public:
    /* This constructor initialises the head of the list to NULL */
    LinkedList();
    /*Destructor: is automatically called when the object goes out of scope (main function finishes execution)*/
    ~LinkedList();
    
    void insertSorted(Node*& _head,int _value);

    /*Returns the number of elements in the list pointed to by head*/
    int length(Node*& _head);

    int search(Node*& _head,int _value);
    void remove(Node*& _head,int _value);
    void display(Node*& _head);
    Node*& getHead();
};

#endif /* LinkedList_hpp */
