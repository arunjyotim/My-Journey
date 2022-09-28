#include<iostream>
int main(){
    
    int intValue {8};
    double double_data{55.5};


    int& reference_to_intValue{intValue};
    double& reference_to_doubleValue{double_data};

    // Printing the references out
    std :: cout << "intValue : " << intValue << std :: endl;
    std :: cout << "intValue address : " << &intValue << std :: endl;
    std :: cout << "intValue References : " << reference_to_intValue << std :: endl;
    std :: cout << "intvalue Reference : "  << &reference_to_intValue << std :: endl;

    /* std :: cout << "sizeof(intValue): " << std:: sizeof(intValue) << std :: endl;
    std :: cout << "sizeof(reference_to_intValue) : " << std :: sizeof(reference_to_intValue) << std :: endl;
 */
    intValue = 111; 
    double_data = 111.23;

    std :: cout << "intValue: " << intValue << std :: endl;
    std :: cout << "&intValue : " << &intValue << std :: endl;

    std :: cout <<"============================================" << std :: endl;

    std :: cout << "ref_intData : " << reference_to_intValue << std :: endl;

    




    system("pause");
    return 0;
}