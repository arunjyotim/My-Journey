#include<iostream>
int main(){
    
    double doubleValue {12.53};
    double& refDoubleValue{doubleValue};        // Reference to double value
    double *pointerDoubleValue{&doubleValue};   // Pointer to double value

    // Reading
    std :: cout << std :: endl;
    std :: cout << "Double Value : "  << doubleValue << std :: endl;
    std :: cout << "ref Double Value : " << refDoubleValue << std :: endl;
    std :: cout << "pointer Double Value : " << pointerDoubleValue << std :: endl;
    std :: cout << "*pointer Double Value : " << *pointerDoubleValue << std :: endl;

    //Writing through references
    refDoubleValue = 18.45;

    std :: cout << std :: endl;
    std :: cout << "Double Value : "  << doubleValue << std :: endl;
    std :: cout << "ref Double Value : " << refDoubleValue << std :: endl;
    std :: cout << "pointer Double Value : " << pointerDoubleValue << std :: endl;
    std :: cout << "*pointer Double Value : " << *pointerDoubleValue << std :: endl;


    double someOtherGuys {78.45};

    // Make reference to reference something else

    refDoubleValue = someOtherGuys;
    std :: cout << std :: endl;
    std :: cout << "Double Value : "  << doubleValue << std :: endl;
    std :: cout << "ref Double Value : " << refDoubleValue << std :: endl;
    std :: cout << "pointer Double Value : " << pointerDoubleValue << std :: endl;
    std :: cout << "*pointer Double Value : " << *pointerDoubleValue << std :: endl;


    pointerDoubleValue = &someOtherGuys;

    std :: cout << std :: endl;
    std :: cout << "Double Value : "  << doubleValue << std :: endl;
    std :: cout << "ref Double Value : " << refDoubleValue << std :: endl;
    std :: cout << "&double Value: " << &doubleValue << std :: endl;
    std :: cout << "&refDoubleValue : " << &refDoubleValue << std :: endl;
    std :: cout << "pointer Double Value : " << pointerDoubleValue << std :: endl;
    std :: cout << "*pointer Double Value : " << *pointerDoubleValue << std :: endl;


    *pointerDoubleValue = 55.55;
     std :: cout << std :: endl;
    std :: cout << "Double Value : "  << doubleValue << std :: endl;
    std :: cout << "ref Double Value : " << refDoubleValue << std :: endl;
    std :: cout << "pointer Double Value : " << pointerDoubleValue << std :: endl;
    std :: cout << "*pointer Double Value : " << *pointerDoubleValue << std :: endl;




    system("pause");
    return 0;
}