#include<iostream>
int main(){
    // Additions
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std :: cout << "Result : " << result << std :: endl;

    result = number1 - number2;
    std :: cout << "Result : " << result << std :: endl;

    result = number2 / number1;
    std :: cout << "Result : " << result << std :: endl;

    result = number1 * number2;
    std :: cout << "Result : " << result << std :: endl;

    //Modulus
    result = number2 % number1;
    std :: cout << "Result : " << result << std :: endl;

    

    system("pause");
    return 0;
}