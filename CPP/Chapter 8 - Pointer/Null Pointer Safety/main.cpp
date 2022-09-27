#include<iostream>
int main(){

    //Verbose nullptr check
    std :: cout << std :: endl;
    std :: cout << "Verbose nullptr check: " << std :: endl;

    int *pointer{}; // Initialized to nullptr
    pointer = new int{8};

    if(!(pointer==nullptr)){
        std :: cout <<"Pointer Points to a Valid address: " << pointer << std :: endl;
        std :: cout << "*pointer : " << *pointer << std :: endl;
    }else{
        std :: cout << "Pointer points to an invalid address." << std :: endl;
    }
    
   /*  delete pointer;
    pointer = nullptr;
 */



/* ANOTHER WAY */

if(pointer){
        std :: cout <<"Pointer Points to a Valid address: " << pointer << std :: endl;
        std :: cout << "*pointer : " << *pointer << std :: endl;
    }else{
        std :: cout << "Pointer points to an invalid address." << std :: endl;
    }

    /* A good practise is to always releasig the memory after using it */
    delete pointer;
    pointer = nullptr;


    system("pause");
    return 0;
}