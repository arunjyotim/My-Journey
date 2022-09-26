#include<iostream>
int main(){
    for(unsigned int i{}; i<10; ++i){
        std :: cout << i << " : I love c++" << std :: endl;
    }


    //size_t : a representation of some unsigned int for positive numbers [sizes]


    for(size_t i{}; i<10 ; ++i){
        std :: cout << i << " : I love c++" << std :: endl;
    }

    std :: cout << "Loop Done!" << std :: endl;

    //scope of the iterator is inside the body if not declared outside


    system("pause");
    return 0;
}