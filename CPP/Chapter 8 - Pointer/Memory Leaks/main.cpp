#include<iostream>
int main(){
    // avoid memory leaks for stay out of the risk of program crash
    int *pointer1(new int{45});

    // Should delete and reset here
    int number{55};
    pointer1 = &number; /* Here pointer1 points to number's address1, But address 1 is sill on the program
                            But our program has lost access to that. So memory has been leaked. */

    
    // Double allocation 

    int *pointer2 {new int{55}};

    // Use the pointer
    // Should delete and reset here

    pointer2 = new int{44}; // memory with int{55} leaked

    
    /* Nested scopes with dynamically allocated memory */
    {
        int *pointer3{new int{57}};

        // delete in the scope
    }

    std :: cout << "Program ending well" << std :: endl;

    system("pause");
    return 0;
}