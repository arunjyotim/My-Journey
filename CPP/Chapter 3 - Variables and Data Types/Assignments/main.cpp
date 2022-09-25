#include<iostream>
int main(){

    int var1{1234};
    std :: cout << "var1 : "<< var1 << std :: endl;

    var1 = 55; 
    std :: cout << "var1 : " << var1 << std :: endl;

    std :: cout << "---------------------------------" << std :: endl;

    double var2{44.55};
    std :: cout << "var2 : " << var2 << std:: endl;

    var2 = 99.99;
    std :: cout << "var2 : " << var2 << std :: endl;

    std :: cout << std :: endl;  

    
    std :: cout << "---------------------------------" << std :: endl;
    std :: cout << std :: endl;

    bool state{false};
    std :: cout << std :: boolalpha;
    std :: cout << "state: " << state << std :: endl;

    state = true;

    std :: cout << "state : " << state << std :: endl;

    // Auto type deduction 
    // Careful about auto assignments

    auto var3{333u};
    var3 = -22;

    std :: cout << "var3 : " << var3 << std :: endl;


    system("pause");
    return 0;
}