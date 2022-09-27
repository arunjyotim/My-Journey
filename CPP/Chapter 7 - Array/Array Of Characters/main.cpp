#include<iostream>
int main(){

    char message [] {'H', 'e', 'l', 'l','o', '\0'};
    std :: cout << "message: " << message << std :: endl;

    std :: cout << "Message : ";
    for(auto c : message ){
        std :: cout << c;
    }
    std :: cout << std :: endl;

    // change character in array

    message[1] = 'a';

     std :: cout << "Message : ";
    for(auto c : message ){
        std :: cout << c;
    }
    std :: cout << std :: endl;


    // If a character array is null terminated, it is called as C-string

    char message1[] {'H', 'e', 'l', 'l','o', '\0'};

    std:: cout << "message1 : " << message1 << std :: endl;
    std :: cout << "sizeof(message1) : " << sizeof(message1) << std:: endl;

    char message2[6] {'H', 'e', 'l', 'l','o'};
    std :: cout << "message2 : " << message2 << std :: endl;
    std :: cout << "sizeof(message2): " << sizeof(message2) << std :: endl;


    char message3[] {'H', 'e', 'l', 'l','o'};// This is not a c string 
                                            // as there is no null character
    std :: cout << "messagee3 : " << message3 << std :: endl;
    std :: cout << "sizeof(message3): " << sizeof(message3) << std :: endl;


    // String literal
    char message4[] {"Hello"};
    std :: cout << "message4 : " << message4 << std:: endl;
    std :: cout << "sizeof(message4): " << sizeof(message4) << std :: endl;

    // 
    int numbers [] {1, 3,4, 5, 6 };
    std:: cout << "numbers: "<< numbers << std:: endl;


    




    system("pause");
    return 0;
}