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
    std::cout << std::endl;
    std::cout << "Length of list: " << my_list.length(my_list.getHead()) << std::endl;
    std::cout << std::endl;
    std::cout << "***************************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "List:" << std::endl;
    my_list.display(my_list.getHead());
    std::cout << std::endl;
    std::cout << "***************************************************************************************************" << std::endl;
    std::cout << std::endl;

    // Now test the 'search' function
    std::cout << std::endl;
    std::cout << "***************************************************************************************************" << std::endl;
    std::cout << "Looking for the number 3... should be in index 4. INDEX: " << my_list.search(my_list.getHead(), 3) << std::endl;
    std::cout << "Looking for the number -10... should be in index 0. INDEX: " << my_list.search(my_list.getHead(), -10) << std::endl;
    std::cout << "Looking for the number 25... should be in index 12. INDEX: " << my_list.search(my_list.getHead(), 25) << std::endl;
    std::cout << "Looking for the number 49... should be in index -1. INDEX: " << my_list.search(my_list.getHead(), 49) << std::endl;
    std::cout << "***************************************************************************************************" << std::endl;
    std::cout << std::endl;

    // Testing removing elements
    std::cout << "***************************************************************************************************" << std::endl;
    my_list.remove(my_list.getHead(), -10);
    my_list.display(my_list.getHead());
    std::cout << std::endl;
    my_list.remove(my_list.getHead(), 14);
    my_list.display(my_list.getHead());
    std::cout << std::endl;
    my_list.remove(my_list.getHead(), -5);
    my_list.display(my_list.getHead());
    std::cout << std::endl;
    my_list.remove(my_list.getHead(), 25);
    my_list.display(my_list.getHead());
    std::cout << "***************************************************************************************************" << std::endl;
    std::cout << std::endl;

    return 0;
}