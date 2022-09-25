#include <iostream>
#include <iomanip>

int main(){

    float number1{1.12342343242342343f}; // Precision : 7
    double number2{1.23412342134234545}; // Precision : 15
    long double number3{2.1241234958723457L}; // Precision : 20

    // Printing out the size
    std :: cout << "Size of float : " << sizeof(float) << std::endl;
    std :: cout << "Size of Double : " << sizeof(double) << std::endl;
    std :: cout << "Size of long double :" << sizeof(long double) << std :: endl << std:: endl;

    //precision
    std :: cout << std :: setprecision(20);
    std :: cout << "Number 1 is : " << number1 << std :: endl;
    std :: cout << "Number 2 is : " << number2 << std :: endl;
    std :: cout << "Number 3 is : " << number3 << std :: endl;

    //Float problems: The precision is usually too limited
    //For a lot of application 
    double number4{192400023.0};

    std :: cout << "number 4: " << number4 << std :: endl;

    double number5{192400023};
    double number6{1.92400023e8};
    double number7{1.924e8};            // Can commit the lower 0023
                                        // for similarity if our application allows

    std :: cout << "Number 5 : " << number5 << std :: endl;
    std :: cout << "Number 6 : " << number6 << std :: endl;
    std :: cout << "Number 7 : " << number7 << std :: endl;


    double number8{0.0000000000034998};
    double number9{3.498e-11};

    std :: cout << "Number 8 : " << number8 << std :: endl;
    std :: cout << "Number 9 : " << number9 << std :: endl;

    



    system("pause");
    return 0;
}