#include<iostream>


int main(){

    int max{};

    int a{35};
    int b{20};

    std :: cout << std:: endl;
    std :: cout << "Using regular if " << std :: endl;

    // if (a>b){
    //     max = a;
    // }else {
    //     max = b;
    // }

    // Doing ternary operations

    max = (a > b)? a : b; // ternary operator

    int min = (a < b)? a : 2; 

    std :: cout << "max : " << max << std :: endl; 

    std :: cout << "min : " << min << std :: endl; 

    system("pause");
    return 0;
}