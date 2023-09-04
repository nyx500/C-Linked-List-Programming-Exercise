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
    
    // Check the length of the list
    std::cout << "Length of list: " << my_list.length(my_list.getHead()) << std::endl;

    // Testing inserting one element into the linked list
    my_list.insertSorted(my_list.getHead(), 6);
    // Check the length of the list
    std::cout << "Length of list now: " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());


    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), 3);
    // Check the length of the list
    std::cout << "Length of list now (should be 2): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), 1);
    // Check the length of the list
    std::cout << "Length of list now (should be 3): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), 10);
    // Check the length of the list
    std::cout << "Length of list now (should be 4): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), 4);
    // Check the length of the list
    std::cout << "Length of list now (should be 5): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), 9);
    // Check the length of the list
    std::cout << "Length of list now (should be 6): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), 9);
    // Check the length of the list
    std::cout << "Length of list now (should be 7): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    // Testing inserting another element into the linked list
    my_list.insertSorted(my_list.getHead(), -2);
    // Check the length of the list
    std::cout << "Length of list now (should be 8): " << my_list.length(my_list.getHead()) << std::endl;
    // Display the list:
    std::cout << "Displaying the list:" << std::endl;
    my_list.display(my_list.getHead());

    return 0;
}