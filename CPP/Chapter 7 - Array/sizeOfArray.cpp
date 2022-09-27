#include<iostream>
int main(){

    int scores[] {1,3, 4,32, 4,2,1,5,1};

    int count = std::size(scores);

    for(size_t i {0}; i< count; ++i){
        std :: cout << "scores [" << i << "] : " << scores[i] << std ::endl;
    }

    system("pause");
    return 0;
}