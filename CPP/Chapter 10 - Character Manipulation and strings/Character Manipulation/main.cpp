#include<iostream>
int main(){

    // Check if character is alphanumeric
    
    std :: cout << std ::endl;
    std :: cout << "std :: isalnum : " << std :: endl;

    
    std :: cout << "C is alphanumeric : " <<  std :: isalnum('C') << std ::endl;
    std :: cout << "^ is alphanumeric : " <<  std :: isalnum('^') << std :: endl;

    // Can use this as a test condition 

    char input_char{'*'};

    if(std :: isalnum(input_char)){
        std :: cout << input_char << " is alphanumeric. " << std :: endl;
    }else{
        std :: cout << input_char << " is not alphanumeric. " << std :: endl;
    }


    // Checking if the character is alphabetic

    std :: cout << std ::endl;
    std :: cout << "std :: isalpha : " << std :: endl;
    std :: cout << " C is alphabetic : " << std :: isalpha('C') << std :: endl;
    std :: cout << " ^ is alphabetic : " << std :: isalpha('^') << std :: endl;
    std :: cout << " 7 is alphabetic : " << std :: isalpha('7') << std :: endl;


    if(std :: isalpha('e')){
        std :: cout << 'e' << " is alphanumeric. " << std :: endl;
    }else{
        std :: cout << 'e' << " is not alphanumeric. " << std :: endl;
    }


    /* Check if character is blank */

    /* std :: cout << std ::endl;
    std :: cout << "std :: isblank : " << std :: endl;
    char message[] {"Hello there, How are you doing? The sun is shining."};
    std :: cout << "message : " << message << std :: endl;

    //finding and printing the blank index
    int blankCounter{};

    int size = (sizeof(message)/sizeof(message[0]));

    for(size_t i{0} ; i < size; ++i){
        // std :: cout << "Value : " << message[i] << std :: endl;
        if(std :: isblank(message[i])){
            std ::cout <<"Found a blank character at index : [" << i << "]" << std ::endl;
            ++blankCounter;
        }
    }

    std :: cout << "In total we found  :" << blankCounter << " blank characters. " << std :: endl; */

    /* Checking uppercase and lowercase character */
    
    std :: cout << std :: endl;
    std :: cout << "std :: islower and std :: isupper" << std :: endl;

    std :: cout << std :: endl;
    char thought[] {"The c++ programming language is one of the most used on the Planet"};
    int lowerCaseCounter{};
    int upperCaseCounter{};

    //Printing the original string
    std :: cout << "Original string : " << thought << std :: endl;

    for(auto i : thought){
        if(std::islower(i)){
            std :: cout << " " << i;
            ++lowerCaseCounter;
        }
        if(std::isupper(i)){
            ++upperCaseCounter;
        }
    }

    std :: cout << std :: endl;
    std :: cout << "Found " << lowerCaseCounter << " lowercase Characters and " 
                            << upperCaseCounter << " uppercase Characters. " << std :: endl;



    /* Digit checking */

    std :: cout << std :: endl;
    std :: cout << "std :: isdigit : " << std :: endl;

    std :: cout << std :: endl;
    char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
    std :: cout << "statement : " << statement << std :: endl;
    int digitCounter{};
    
    
    for(auto i : statement){
        if(std::isdigit(i)){
            std:: cout << "Found digit: " << i << std:: endl;
            ++digitCounter;
        }
    }

    std :: cout << std :: endl;
    std :: cout << "Found " << digitCounter << " digits in the statement string. " << std :: endl;


    /* Turing into upper case and lower case  */

    std :: cout << std :: endl;
    std :: cout << "std :: tolower and std :: toupper : " << std :: endl;

    std :: cout << std :: endl;
    char originalString[] {"Home. The feelings of belonging"};
    
    size_t sizeOfOriginalString{sizeof(originalString)/sizeof(originalString[0])};

    char destString[sizeOfOriginalString];

    // Turning into uppercase string
    for(size_t i{}; i<sizeOfOriginalString; ++i){
        destString[i] = std::toupper(originalString[i]);
    }

    std :: cout << "originalString: " << originalString << std :: endl;
    std :: cout << "destString: " << destString << std :: endl;


    /* Turing into lower case and lower case  */

    std :: cout << std :: endl;
    std :: cout << "std :: tolower and std :: toupper : " << std :: endl;

    std :: cout << std :: endl;


    char destString2[sizeOfOriginalString];

    // Turning into lowercase string
    for(size_t i{}; i<sizeOfOriginalString; ++i){
        destString2[i] = std::tolower(originalString[i]);
    }

    std :: cout << "originalString: " << originalString << std :: endl;
    std :: cout << "destString 2: " << destString2 << std :: endl;


    system("pause");
    return 0;
}