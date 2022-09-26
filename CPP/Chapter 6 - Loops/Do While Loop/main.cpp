#include<iostream>

int main(){
    const unsigned int COUNT{10};
    size_t i{};

    do{
        std :: cout << " " << i << " I love C ++" << std :: endl;
        ++i;
    }while(i<COUNT);
    system("pause");
    return 0;
}