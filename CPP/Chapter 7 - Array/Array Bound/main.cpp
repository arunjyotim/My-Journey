#include<iostream>
int main(){

    int numbers[] {1, 2, 3, 4, 5, 6, 7, 8 , 9, 0};

    // Read beyond bounds : Will read garbage or crash your program

    // This is not possible as no location as such exists
    numbers[12342342] = 1234234;
    std :: cout << "numbers[12] : " << numbers[12342342] << std :: endl;

    std :: cout << "The program is endingg.............." << std :: endl;


    system("pause");
    return 0;
}