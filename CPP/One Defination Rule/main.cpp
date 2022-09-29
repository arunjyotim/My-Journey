#include<iostream>
#include "person.h"


//Variable : Declaration and function

double weight{};

double add(double a, double b);

struct Point{
    double mX{};
    double mY{};
};

int main(){
    
    Person p1("John Snow", 35);
    p1.print_info();

    return 0;
}

double add(double a, double b){
    return a+b;
}
