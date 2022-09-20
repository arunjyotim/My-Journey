#include<iostream>
#include<string>

int main(){

    //printing data
    std :: cout << "Hello c++20" << std:: endl;


    int age{21};
    std :: cout << "Age : " << age << std :: endl;

    // printing error
    std :: cerr << "Error message : Something is wrong!" << std:: endl;
    // printing log message
    std :: clog << "Log Message : Something happened!" << std :: endl;

    //
    int age1;
    std:: string name;
    std :: cout << "Please type your name and age: " << std :: endl;

    // std :: cin >> name;
    // std :: cin >> age1;

    // Data input
    std :: cin >> name >> age1;

    std :: cout << "Hello " << name << " you are " << age1 << " years old!" << std :: endl;

    // Another way of taking input
    std :: string fullName;
    int age3;

    std :: cout << "Enter you full name and age: " << std :: endl;
    std :: getline(std :: cin, fullName);
    std :: cin >> age3;

    std :: cout << "Your full name is " << fullName << " and you are " << age3 << " Years old" << std :: endl;

    system("pause");
    return 0;
    
}