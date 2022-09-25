#include<iostream>

int main(){

    // Infinity and Nan
    std :: cout << std :: endl;
    std :: cout << "Infinity and NaN" << std :: endl;

    double number1{-5.6};
    double number2{}; // initialized to 0
    double number3{}; // initialized to 0

    // Infinity
    double result{number1/number2};

    
    std :: cout << number1 << "/" << number2 << " yields " << result << std :: endl;
    std :: cout << result << " + " << number1 << " yields " << result + number1 << std :: endl;

    //NaN
    result = number2 / number3;
    
    std :: cout << "Result: " << result << std :: endl;
    

    system("pause");
    return 0;
}