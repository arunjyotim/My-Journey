#include<iostream>
int main(){

    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2); 

/*
    bool result = (number1 < number2); 
    std :: cout << std :: boolalpha << "Result : " << result << std :: endl;
    
    std :: cout << std :: endl;
    std :: cout << "free standing if statement : " << std :: endl;

    //if(result){}

    if (result==true) { 
        std :: cout << number1 << " is less than " << number2 << std :: endl;
    }

    if(!(result == true)){
        std :: cout << number1 << " is not less than " << number2 << std :: endl;
    }

    */

   /* std :: cout << std :: endl;
    std :: cout << "Using else clause: " << std :: endl;

    //if(result){}

    if (result==true) { 
        std :: cout << number1 << " is less than " << number2 << std :: endl;
    }else{
        std :: cout << number1 << " is not less than " << number2 << std :: endl;
    }
    */

    std :: cout << std :: endl;
    std :: cout << "Using else clause: " << std :: endl;

    //if(result){}

    if (number1 < number2) { 
        std :: cout << number1 << " is less than " << number2 << std :: endl;
    }else{
        std :: cout << number1 << " is not less than " << number2 << std :: endl;
    }

    //===========================================
    // Trafic line simulator

    std :: cout << std :: endl;

    std :: cout << "Nesting if statements " << std :: endl;


    bool red {false};
    bool green{true};
    bool yellow{false};
    bool police_Stop{true};

    /* if green : go
          red   : stop
          green and police_Stop : stop
    */

//    if (red){
//         std :: cout << "Stop" << std:: endl;
//    }
//    if(yellow) {
//         std :: cout << "Slow down" << std:: endl;
//    }
//    if(green) {
//         std :: cout << "Go" << std:: endl;
//    }

    std :: cout << std :: endl;

    std :: cout << "Police officer stops(verbose) " << std :: endl;

    if(green){
        if(police_Stop){
            std :: cout << "Stop" << std :: endl;
        }else {
            std :: cout << "Go" << std :: endl;
        }
    }


    std :: cout << std :: endl;

    std :: cout << "Police officer stops(less verbose) " << std :: endl;

    if(green && !police_Stop){
        std :: cout << "Go" << std :: endl;
    }else{
        std :: cout << "Stop" << std :: endl;
    }











    system("pause");
    return 0;
}