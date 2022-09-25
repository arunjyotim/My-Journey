#include <iostream>

int main(){

    bool red_light{true};
    bool green_light{false};

    if(red_light == true){
        std :: cout << "Stop!" << std :: endl;
    }else{
        std :: cout << "Go Through!" << std:: endl;
    }

    if(green_light){
        std :: cout << "The light is green!" << std :: endl;
    }else{
        std :: cout << "The light is Not Green!" << std :: endl;
    }

    //sizeof()
    std :: cout << "The size of (bool): " << sizeof(bool) << std :: endl;

    // Printing out a bool
    // 1 -- >> true
    // 0 -- >> false

    std :: cout << std :: endl;
    std :: cout << "red_light : " << red_light << std :: endl;
    std :: cout << "green_light : " << green_light << std :: endl; 


    std :: cout << std::boolalpha;
    std :: cout << "Red Light: " << red_light << std :: endl;
    std :: cout << "Green Light: " << green_light << std :: endl;

    system("pause");
    return 0;
}