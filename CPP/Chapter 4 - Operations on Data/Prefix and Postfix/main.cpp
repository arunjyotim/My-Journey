#include<iostream>
int main(){

    int value{5};

    //increment by 1
    value = value + 1;
    std :: cout << "The value is : " << value << std :: endl;

    //value = 5;

    // Decrement by 1
     value = value - 1;
     std :: cout << "The value is : " << value << std :: endl;

    // =================================================================

    std :: cout << "\n======Postfix increment and decrement =========\n" << std :: endl;


    value = 5; 
    std :: cout << "The value is (incrementing) : " << value++ << std :: endl;
    std :: cout << "The value is : " << value << std :: endl;

    std :: cout << std :: endl;

    //Decrement with postfix

    // resetting value to 5
    value = 5; 
    std :: cout << "The value is (decrementing) : " << value-- << std :: endl;
    std :: cout << "The value is : " << value << std :: endl;


    // =================================================================

    std :: cout << "\n======Prefix increment and decrement =========\n" << std :: endl;



    //incrementing with prefix

    value = 5; 
    ++value;
    std :: cout << "The value is (prefix++) : " << value << std :: endl;

    //Reset value to 5
    value = 5; 
    std :: cout << "The value is (prefix++ in place) : " << ++value << std :: endl;


    

    //Decrement with prefix

    value = 5; 
    --value;
    std :: cout << "The value is (prefix--) : " << value << std :: endl; //4

    //Reset value to 5
    value = 5; 
    std :: cout << "The value is (prefix++ in place) : " << --value << std :: endl; //4



    system("pause");
    return 0;
}