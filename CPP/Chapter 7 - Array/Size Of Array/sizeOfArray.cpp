#include<iostream>
int main(){

    int scores[] {1,3, 4,32, 4,2,1,5,1};


    std :: cout << "size of(scores): " << sizeof(scores) << std :: endl;
    std :: cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std :: endl;

    int count {sizeof(scores)/sizeof(scores[0])};



    // int count = std::size(scores);

    for(size_t i {0}; i< count; ++i){
        std :: cout << "scores [" << i << "] : " << scores[i] << std ::endl;
    }


    // ranged based for loop
    int numbers[] {1,3, 4,32, 4,2,1,5,1, 34 , 54 };
    for(auto i : numbers){
        std :: cout << "value : " << i << std :: endl; 
    }

    system("pause");
    return 0;
}