#include<iostream>
int main(){

    int number1 {45};
    int number2 {60};

    std :: cout << "number1: " << number1 << std::endl;
    std :: cout << "number2: " << number2 << std ::endl;


    std :: cout << std :: endl;

    std :: cout << std::boolalpha;
    std :: cout << "Comparing Variables " << std :: endl;

    std :: cout << "Number1 < number2 : " << (number1 < number2) << std :: endl;
    std :: cout << "Number1 <= number2 : " << (number1 <= number2) << std :: endl;
    std :: cout << "Number1 > number2 : " << (number1 > number2) << std :: endl;
    std :: cout << "Number1 >= number2 : " << (number1 >= number2) << std :: endl;
    std :: cout << "Number1 == number2 : " << (number1 == number2) << std :: endl;
    std :: cout << "Number1 != number2 : " << (number1 != number2) << std :: endl;

    


    system("pause");
    return 0;
}