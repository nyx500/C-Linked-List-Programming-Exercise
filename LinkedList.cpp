#include "LinkedList.hpp"

/* This constructor initialises the head of the list to NULL */
LinkedList::LinkedList(){
    head = NULL;
}

LinkedList::~LinkedList(){
    // Set tmp variable to a refernce to the head pointer.
    // tmp is a pointer which points to the same address stored in head.
    Node* tmp = head;

    // Traverse the list and keep deleting until tmp points to NULL
    while (tmp != NULL)
    {
        Node* next_node = tmp->next;
        delete tmp;
        tmp = next_node;
    }
    
    // Set head to NULL
    head = NULL;
    std::cout << "LinkedList::~LinkedList - list has been deleted using the destructor." << std::endl;
}

void LinkedList::insertSorted(LinkedList::Node*& _head,int _value){

    // Create the new node with 'NULL' in the data field
    struct Node* newNode = new Node{ _value, NULL };
    cout << "Debug1:  printing data value of newNode --> " << newNode->data << endl;
    cout << "Debug1:  printing 'next' value of newNode --> " << newNode->next << endl;

    // Copy the address in head into the 'tmp' pointer
    Node* tmp = _head;
    //cout << "Debug3: printing data value of tmp --> " << tmp->data << endl;

    //// If the list is empty, insert the node in the first position
    if (tmp == NULL)
    {
        head = newNode;
    }
    else
    {  
        if (tmp->data >= _value)
        {
            newNode->next = tmp;
            head = newNode;
        }
        else
        {
            Node* previous_node = tmp;
            tmp = tmp->next;

            while (tmp != NULL)
            {   
                if (tmp->data >= _value)
                {
                    break;
                }
                previous_node = tmp;    
                tmp = tmp->next;
            }

            newNode->next = tmp;
            previous_node->next = newNode;
        }
        
    }
    
}
int LinkedList::length(LinkedList::Node*& _head){

    Node* tmp = _head;

    int counter(0);

    while (tmp != NULL)
    {   
        ++counter;
        tmp = tmp->next;
    }
    
    return counter;
}

int LinkedList::search(LinkedList::Node*& _head,int _value){
    return -1;
}
void LinkedList::remove(LinkedList::Node*& _head,int _value){
    
}

// & means 'pass by reference', so here we must pass a reference to the head pointer
void LinkedList::display(LinkedList::Node*& _head){
    Node* iterator = _head; // Do not want to move the actual head, make a copy
    
    if (iterator == NULL){
        cout << "The list is empty";
    }
    
    while(iterator!=NULL)
    {   
        cout<<"Printing the list..." << endl;
        cout << "[" + std::to_string(iterator->data) + "] ";
        iterator=iterator->next;
    }
    cout << endl;
}

LinkedList::Node*& LinkedList::getHead(){
    return*& this->head;
}

