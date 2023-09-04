#include <iostream>
#include "LinkedList.hpp"

int main()
{   
    // Initialize the list
    LinkedList my_list;
    
    // Check if the head points to NULL using the getter method
    if (my_list.getHead() == NULL)
    {   
        std::cout << "Head points to NULL." << std::endl;
    }
    else
    {
        std::cout << "ERROR - head doesn't point to NULL." << std::endl;
    }

    // Testing inserting one element into the linked list
    my_list.insertSorted(my_list.getHead(), 6);
    my_list.insertSorted(my_list.getHead(), 3);
    my_list.insertSorted(my_list.getHead(), -2);
    my_list.insertSorted(my_list.getHead(), 10);
    my_list.insertSorted(my_list.getHead(), 1);
    my_list.insertSorted(my_list.getHead(), 12);
    my_list.insertSorted(my_list.getHead(), -10);
    my_list.insertSorted(my_list.getHead(), -5);
    my_list.insertSorted(my_list.getHead(), 16);
    my_list.insertSorted(my_list.getHead(), 8);
    my_list.insertSorted(my_list.getHead(), 12);
    my_list.insertSorted(my_list.getHead(), 14);
    my_list.insertSorted(my_list.getHead(), 25);
    // Check the length of the list
    std::cout << "Length of list: " << my_list.length(my_list.getHead()) << std::endl;
    std::cout << "List:" << std::endl;
    my_list.display(my_list.getHead());
   
    return 0;
}