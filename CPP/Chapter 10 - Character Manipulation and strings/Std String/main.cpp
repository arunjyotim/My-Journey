#include<iostream>
#include<string>
int main(){
    

    std:: string full_name; // empty string
    std :: string planet{"Earth, It where I was born."}; // Initialize with string literal
    std :: string preferred_planet{planet}; // initialize with other existing string
    std :: string message{"Hello there",5}; // Initialize with part of a string literal

    std :: string weird_message{5,'e'}; // initialize with multiple copy of character e
    
    std :: string greeting{"Hello World!"}; 
    std :: string saying_hello{greeting, 6, 6}; // Initialize with part of an existing string starting at index 6


    std :: cout << "full_name: " << full_name << std :: endl;
    std :: cout << "planet :" << planet << std ::endl;
    std :: cout << "preferred_planet : " << preferred_planet << std :: endl;
    std :: cout << "message : " << message << std :: endl;
    std :: cout << "weird Message : " << weird_message << std :: endl;
    std :: cout << "greeting : " << greeting << std :: endl;
    std :: cout << "saying_hello : " << saying_hello << std :: endl;



    //changing std :: string  at runtime


    planet = "Earth. where the sky is blue Earth . Where I can take a deep breath!";
    std :: cout << "planet :" << planet << std ::endl;


    //use a raw array

    const char *planet1 {"Earth. Where the sky is blue Earth"};
    planet1 = "Earth. where the sky is blue Earth . Where I can take a deep breath!";
    std :: cout << "planet1 :" << planet1 << std ::endl;

    


    system("pause");
    return 0;
}

