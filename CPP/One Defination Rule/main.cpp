#include<iostream>

//Variable : Declaration and function

double weight{};

double add(double a, double b);

struct Point{
    double mX
    double mY;
}

int main(){
    
    Point p1;

    std :: cout << "Point 1"
    
    double result = add(13.3, 45.5);

    std :: cout << "Result : " << result << std :: endl;

    system("pause");
    return 0;
}

double add(double a, double b){
    return a+b;
}
