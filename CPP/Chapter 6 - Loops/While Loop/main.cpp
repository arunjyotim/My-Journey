#include<iostream>
int main(){

    const unsigned int COUNT {10};

    size_t i{0};

    while(i<COUNT){
        std :: cout << " I Love C ++ " << std :: endl;
        ++i;
    }

    std :: cout << "Loop is done!" << std :: endl;
    
    system("pause");
    return 0;
}