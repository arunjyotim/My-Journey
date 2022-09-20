#include <iostream>

//passing two parameter from main in the addNumer function to do the math
int addNumber(int first_number, int second_number){
    int result = first_number + second_number;

    return result;
}

int main(){
    
    // A new way of declaring code
    int first_number {3};
    int second_number {7};

    std :: cout << "First Number: " << first_number << std :: endl;
    std :: cout << "Second Number: " << second_number << std :: endl;
    
    int sum = addNumber(first_number, second_number); 

    std :: cout << "Sum : " << sum << std::endl;



    system("pause");
    return 0;
}