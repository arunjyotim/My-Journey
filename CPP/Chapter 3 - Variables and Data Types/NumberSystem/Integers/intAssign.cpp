#include <iostream>
int main(){

    //Braced initializers
    //Variable may contain random garbage value. WARNING
    int elephant_count;

    int lionCount{}; //Initializes to zero

    int dogCount{10}; // Initializes to 10

    int catCount{15}; // Initializes to 15

    //can use expression as initializer
    int domesticatedAnimal{dogCount+catCount};

    std :: cout << "Elephant count: " << elephant_count << std :: endl;
    std :: cout << "Dog count :" << dogCount << std:: endl;
    std :: cout << "Cat count : " << catCount << std :: endl;
    std :: cout << "Domesticated Animal: " << domesticatedAnimal << std :: endl;

    //Functional Initialization
    int appleCount{5};
    int orangeCount{10};
    int fruitCount{appleCount+orangeCount};


    //Information lost. Less safef than braced initializers
    int narrowingConversionFunctional (2.9);

    std:: cout << "The size of apple count: " << sizeof(appleCount) << std::endl;

    std:: cout << "Apple Count: "<<appleCount<< std:: endl;
    std :: cout << "Orange Count: " << orangeCount << std :: endl;
    std :: cout << "Fruit Count : " << fruitCount << std :: endl;
    std :: cout << "Narrowing conversion : " << narrowingConversionFunctional << std :: endl;
    //
    system("pause");
    return 0;
}