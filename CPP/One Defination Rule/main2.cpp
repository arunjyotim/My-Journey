#include<iostream>
int main(){
    
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
    
    std :: cout << "This line should be printed." << std :: endl;
    std :: cout << "A Single code a day makes you better coder away" << std :: endl;
    std :: cout << "A Single code a day makes you better coder away" << std :: endl;
    std :: cout << "A Single code a day makes you better coder away" << std :: endl;
    std :: cout << "A Single code a day makes you better coder away" << std :: endl;


    system("pause");
    return 0;
}

