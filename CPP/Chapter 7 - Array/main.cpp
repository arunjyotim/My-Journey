#include<iostream>
int main(){

    int scores[10];

    for (size_t i {0}; i<10 ; ++i){
        scores[i] = i * 10;
    }

    // print the data out 
    for (size_t i{}; i<10 ; ++i){
        std :: cout << "scores [" << i << "] : " << scores[i] << std :: endl;

    }

    double salaries[5] {12.7, 7.5, 12.3, 8.1, 9.3};


    // print the data out 
    for (size_t i{}; i<5 ; ++i){
        std :: cout << "salaries [" << i << "] : " << salaries[i] << std :: endl;

    }


    int class_size[] {10, 12, 15, 11, 18, 17};

    for(auto value: class_size){
        std :: cout << "Class Size : " << value << std :: endl;
    }


    int score[] {10, 12, 15, 11, 18, 17, 23, 56};

    int sum{};

    for(int element: score){
        sum += element;
    }
    std :: cout << "Score Sum : " << sum << std:: endl;


    system("pause");
    return 0;
}