#include<iostream>
int main(){

    int number{22};
    int *p_number = &number;

    std :: cout << std :: endl;

    std :: cout << "Declaring pointer and assigning address: " << std :: endl;
    std :: cout << "number : " << number << std :: endl;
    std :: cout << "p_number: " << p_number << std :: endl;
    std :: cout << "&number : " << &number << std :: endl;
    std :: cout << "*p_number : " << *p_number << std :: endl;

    int *p_number1; // Uninitialized pointer, contains junk address
    int number1{12};

    p_number1 = &number1;// Make it point to a valid address

    std :: cout << std :: endl;
    std :: cout << "Uninitialed Pointer: " << std :: endl;
    std :: cout << "*p_number1: " << *p_number1 << std :: endl;
    //std :: cout << "*p_number1 : " << *


    // Dynamic memory allocation

    int *pointer {nullptr};
    pointer = new int;      /* Dynamically allocate space for a single int on the heap.
                                This memory belongs to our program from now on. The system
                                can not use it for anything else, untill we return it. 
                                After this line executes, we will have a valid memory location
                                allocated. The size of the allocated memory will be such that it 
                                can store the type pointed to by the pointer. */

    *pointer = 77;  // Writing into dynamically allocated memory

    std :: cout << std :: endl;
    std :: cout << "Dynamically allocating memory: " << std :: endl;
    std :: cout << "pointer : " << *pointer << std :: endl;


    // Return/ Release the memory to system
    delete pointer;
    pointer = nullptr;

    //reusing the pointer
    pointer = new int(81);
    std :: cout << "Pointer : " << *pointer << std :: endl; 

    delete pointer; 
    pointer = nullptr;

    std::cout << "Done writing ! " << std :: endl;

    system("pause");
    return 0;
}