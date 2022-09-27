#include<iostream>
int main(){
    /* What is dangling pointer?  */
    // Uninitialized pointer
    // Deleted Pointer
    // Multiple pointers pointing to the same memory

    //== solution==
    // initiliaze the pointer
    // Reset pointer after delete
    // make sure the owner pointer is very clear


    // Case 1 : uninitialized

    int *pointer1; // Dangling uninitialized pointer

    // Case 2 : Deleted pointer and not initilaize the memory and using it again;

    std :: cout << "Case 2 : Deleted Pointer " << std :: endl;
    int *pointer {new int{45}};

    std :: cout << "*pointer(before Delete) : " << *pointer << std :: endl;

    delete pointer; 

    //std :: cout << "*pointer (after delete) : " << *pointer << std :: endl;



    // Case 3 : pointing to the same address

    int *pointer2(new int {82});
    int *pointer3(pointer2);

    std :: cout << "Pointer 2 : " << *pointer2 << std :: endl;
    std :: cout << "Pointer 3 : " << *pointer3 << std :: endl; 



    delete pointer2;
    std :: cout << "Pointer 3 : " << *pointer3 << std :: endl; 

    /* ======================SOLUTION FOR DANGLING POINTER =========================== */

    /* Solution 1 : Initializing pointer immediately after declaration */

    std :: cout << std :: endl;
    std :: cout << "Solution 1 : " << std :: endl;

    int *pointer5{nullptr};
    int *pointer6{new int{45}};

    // Checking for nullptr before using it
    if(pointer6 != nullptr){
        std :: cout << "pointer6 : " << *pointer6 << std :: endl;
    }else{
        std :: cout << "Invalid Pointer!" << std :: endl;
    }

    /* Solution 2 : Right after deleting a pointer, resetting it to the nullptr to make it clear
                    that it doesn't point anywhere */


    std :: cout << std :: endl;
    std :: cout << "Solution 2 : " << std :: endl;

    int *pointer7(new int{54});
    
    //use the pointer however I want
    std :: cout << "Pointer7 : " << pointer7 << " - " << *pointer7 << std :: endl;

    delete pointer7;
    pointer7 = nullptr; // Resetting the pointer

    // check for nullptr

    if(pointer7 != nullptr ){
        std :: cout << "pointer7 : " << *pointer7 << std :: endl;
    }else{
        std :: cout << "invalid memory access !" << std :: endl;
    }


    /* Solution 3: For multiple pointing to the same address, Making sure there is one clear
                    pointer (master pointer) that owns the memory (responsible for releasing when
                    necessay) , other pointer should only be able to dereference when the master 
                    pointer is..... */


    std :: cout << std :: endl;
    std :: cout << "Solution 3 : " << std :: endl;
    int *pointer8(new int{53});
    int *pointer9(pointer8);


    
    //dereferencing the pointer and use them
    std :: cout << "Pointer8 : " << pointer8 << " - " << *pointer8 << std :: endl;

    if(!(pointer8 == nullptr)){
        std :: cout << "Pointer9 : " << pointer9 << " - " << *pointer9 << std :: endl;
    }

    delete pointer8;    // Master releases the memory
    pointer8 = nullptr;

    if(!(pointer8 == nullptr)){ // only use the slave pointer when master pointer is valid
        std :: cout << "Pointer9 : " << pointer9 << " - " << *pointer9 << std :: endl;
    }else{
        std :: cout << "Warning: Trying to access an invalid pointer!" << std :: endl;
    }

    
    
    

    system("pause");
    return 0;
}