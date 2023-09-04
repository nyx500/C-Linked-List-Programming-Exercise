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

    // Copy the address in head into the 'tmp' pointer
    Node* tmp = _head;

    // If the list is empty, insert the node in the first position
    if (tmp == NULL)
    {
        head = newNode;
    }
    // List is not empty...
    else
    {   
        // Check if first Node in the list contains a data value which is greater-than-or-equal to the value-to-insert
        if (tmp->data >= _value)
        {   
            // If value-in-first-node is greater than or equal to it, then insert the new node at the beginning of the list
            newNode->next = tmp; // Make newNode point to the first node in the list
            head = newNode; // Make the head ptr point to the new node (address)
        }
        // If first node is smaller than the inputted value-to-add, then continue to traverse the list...s
        else
        {   
            // Intialisation of previous and temp node pointers: temp will end up pointing to the address of the node
            // that must go AFTER the new node, and prev should point to the address of the node that goes before.
            Node* previous_node = tmp;
            tmp = tmp->next;

            // Traverse through the list until tmp stores the NULL address...
            while (tmp != NULL)
            {   
                // Stop iterating if the data-value in 'tmp' is larger than (or equal to) the value-to-be-inserted!
                if (tmp->data >= _value)
                {
                    break;
                }
                
                // If the data-value in the Node pointed to by 'tmp' is smaller than the new value, keep on traversing.
                previous_node = tmp;    
                tmp = tmp->next;
            }

            // Now the loop is complete, tmp should EITHER point to the first number greater than or equal to the _value,
            // or if no greater number than _value was found in the list, it should point to NULL.
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

/* Returns where element x is in the list pointed to by head. If there is >1 position where x is, returns the 1st position. If not found, return -1. */
int LinkedList::search(LinkedList::Node*& _head,int _value){
    
    Node* tmp = _head;
    
    // First iteration of the while-loop means head doesn't point to NULL --> set position/index counter to 0 (1st element).
    int position = 0;
    // Iterate over the list
    while (tmp != NULL)
    {   
        if (tmp->data == _value)
        {
            return position;
        }
        // Go to next Node by updating temp
        tmp = tmp->next;
        // Update the position counter
        ++position;
    }

    // Element not found during running of while-loop (or while loop didn't run at all due to the fact head pointed to NULL)
    return -1;
}

/**  This method removes element _value from the list pointed to by head. If there is more than one element equal to _value, only the first element is removed  */
void LinkedList::remove(LinkedList::Node*& _head,int _value)
{
    Node* tmp = _head;

    // Only do this if list is not empty...
    if (tmp != NULL)
    {   
        // First Node has data-field set to value:
        if (tmp->data == _value)
        {   
            // Set head (reference) to the next-field in the first node's pointer field and delete the tmp node
            _head = tmp->next;
            delete tmp;
        }
        else
        {
            // Initialize previous and to-be-deleted pointers
            Node* prev = tmp;
            tmp = tmp->next;

            // Only continue until end of the list
            while (tmp != NULL)
            {
                if (tmp->data == _value)
                {   
                    // If value is found, then set next-field  of the previous Node to the next-field of the tmp node
                    prev->next = tmp->next;
                    break;
                }
                // If value not found, go on traversing the list
                prev = tmp;
                tmp = tmp->next;
            }
            
        }
    }
}

// & means 'pass by reference', so here we must pass a reference to the head pointer
void LinkedList::display(LinkedList::Node*& _head){
    Node* iterator = _head; // Do not want to move the actual head, make a copy
    
    if (iterator == NULL){
        cout << "The list is empty";
    }
    
    while(iterator!=NULL)
    {   
        cout << "[" + std::to_string(iterator->data) + "] ";
        iterator=iterator->next;
    }
}

LinkedList::Node*& LinkedList::getHead(){
    return*& this->head;
}

