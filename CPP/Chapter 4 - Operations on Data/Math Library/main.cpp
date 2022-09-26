#include<iostream>
#include<cmath>

int main(){

    double weight{7.7};

    //floor
    std :: cout << "Weight rounded to floor is : " << std::floor(weight) << std :: endl;

    //ceil
    std :: cout << "Weight rounded to ceil is : " << std :: ceil(weight) << std :: endl;

    // abs
    double saving {-5000};

    std :: cout << "Abs of weight is : " << std :: abs(weight) << std :: endl;
    std :: cout << "Abs of saving is : " << std :: abs(saving) << std :: endl;

    
    //exp : f(x) = e ^ x , where e = 2.71828. 

    double exponential = std :: exp(1);

    std :: cout << "Exponential of 1 is : " << exponential << std :: endl;


    // pow

    std :: cout << "3^4 is : " << std :: pow(3,4) << std :: endl;
    std :: cout << "9^3 is : " << std:: pow(9,3) << std :: endl;

    //log : reverse of power function if 2^3 = 8, then log 8 in base 2 = 3. 

    // Trying reverse operation of e^4 = 54.59, it will be log 54.59 in base e = ?

    std :: cout << "Log, to get 54.59, you would elevate e to the power of: " << std :: log(54.59) << std:: endl;

    std :: cout << "Let's elevate : " << std:: pow( std::exp(1),4) << std :: endl;

    // log10, 10^4 = 10000, to get 10k, you'd need to elevate 10 to the power of = ?

    std :: cout << " To get 1000 , you'd need to elevate 10 to the power of : " 
                << std :: log10(1000) << std :: endl;

    

    //square root 
    std :: cout << "The square root of 81 is : " << std:: sqrt(81) << std :: endl;

    // round 
    std :: cout << "3.654 rounded to : " << std :: round(3.654) << std :: endl;
    std :: cout << "2.5 is rounded to : " << std :: round(2.5) << std :: endl;
    std :: cout << "2.4 is rounded to : " << std :: round(2.4) << std :: endl;

    system("pause");
    return 0;
}