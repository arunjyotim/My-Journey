#include<iostream>
int main(){


    // Declare and initialize a pointer

    // int *pNumber {};
    // double *pFructionalNumber{};

    // Explicitly initialize with nullptr

    int *pNumber{nullptr};
    int *pFructionalNumber{nullptr};

    //pointer to different variable are of same size

    // It doesn't matter where * is put

    int* pointer1{nullptr};
    int * pointer2{nullptr};
    int  *pointer3{nullptr};

    int *pointer5{}, integer{}; // the first declaration only defines pointer the other refers to variables

    // assigning data in pointer

    int intVar{43};
    int *pointeInt{&intVar};

    std :: cout << "Int Var : " << intVar << std :: endl;
    std :: cout << "Pointer address in memory: " << pointeInt << std :: endl;

    int intVar2{63};
    pointeInt = &intVar2; 

    std :: cout << "Int Var2 : " << intVar2 << std :: endl;
    std :: cout << "Pointer address in memory: " << pointeInt << std :: endl;

    int *pointerInt{nullptr};
    double doubleVar{33};

    //pointeInt = &doubleVar; // complier error as different types variable memory address can not be assigned
    int *pint2{nullptr};
    int intData{56};
    pint2 = &intData;

    std :: cout << " value : " << *pint2 << std :: endl;


    system("pause");
    return 0;
}