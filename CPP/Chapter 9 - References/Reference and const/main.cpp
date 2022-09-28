#include<iostream>
int main(){
    
    // Non const referece
    int age {27};
    const int& ref_age{age};

    std :: cout << "age : " << age << std :: endl;
    std :: cout << "ref_age : " << ref_age << std :: endl;

    // can modify original variable through references

    std :: cout << std :: endl;
    std :: cout << "Modify original variable through references : " << std :: endl;
    
    ref_age++;

    std :: cout << "age  : " << age << std :: endl;
    std :: cout << "ref_age : " << ref_age << std :: endl;


    // Simulating reference behavious with pointer 

    const int *const pAge {&age};

    *pAge = 45; 


    system("pause");
    return 0;
}