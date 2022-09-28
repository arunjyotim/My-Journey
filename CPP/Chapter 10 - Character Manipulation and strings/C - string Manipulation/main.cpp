#include<iostream>
#include<cstring>
int main(){
    
    //std::strlen : Find the length of a string 
    // Real arrays and those decayed into pointers
    const char message1[] {"The sky is blue."};

    //Array decays into pointer when we use const char*
    const char* message2{"The sky is blue"};

    std :: cout << "message1 : " << message1 << std :: endl;

    //strlen ignores null character
    std :: cout << "strlen(message1) : " << std :: strlen(message1) << std :: endl;

    //sizeof Includes the null character
    std :: cout << "sizeof(message1) : " << sizeof(message1) << std :: endl;

    //strlen still works with decayed arrays
    std :: cout << "strlen(message2) : " << std :: strlen(message2) << std :: endl;

    //Prints size of pointer
    std :: cout << "sizeof(message2) : " << sizeof(message2) << std :: endl;


    /* =======================String comparing ======================*/

    // std :: strcmp - signature : int strcmp(const char *lhs, const char *rhs);
    // returns negative value if lhs appears before rhs in lexicographical order,
    // zero if lhs and rhs compare equal.
    // and positive value if lhs appears after rhs in lexicographical order.

    std :: cout << std :: endl;
    std :: cout << "std::strcmp : " << std :: endl;

    const char* string_data1{"Clabama"};
    const char* string_data2{"Blabama"};

    size_t n{3};

    char string_data3[]{"Alabama"};
    char string_data4[]{"Blabama"};

    //Print out the comparison
    std :: cout << "std :: strcmp (" << string_data1 << " , " << string_data2 << ") : " 
                << std :: strcmp(string_data1, string_data2) << std :: endl;

    std :: cout << "std :: strcmp (" << string_data3 << " , " << string_data4 << ") : " 
                << std :: strcmp(string_data3, string_data4) << std :: endl;

   
    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    //Print out the comparison
    std :: cout << "std :: strncmp (" << string_data1 << " , " << string_data2 <<" , " << n << ") : " 
                << std :: strncmp(string_data1, string_data2,n) << std :: endl;

    n = 5;
    string_data1 = "aaabama";
    string_data2 = "aaabamb";

    //Print out the comparison
    std :: cout << "std :: strncmp (" << string_data1 << " , " << string_data2 <<" , " << n << ") : " 
                << std :: strncmp(string_data1, string_data2,n) << std :: endl;


    n = 5;
    string_data1 = "aaaoa";
    string_data2 = "aaance";

    //Print out the comparison
    std :: cout << "std :: strncmp (" << string_data1 << " , " << string_data2 <<" , " << n << ") : " 
                << std :: strncmp(string_data1, string_data2,n) << std :: endl;


    /* ===================Finding all the characters one by one ==================== */

    const char *str {"Try not. Do, or do not. There is no try."};
    // Can make this a const pointer to prevent users from making it point somewhere else
    char target = 'T';
    const char *result = str;
    int iterations{};

    while((result = std :: strchr(result, target)) != nullptr){
        std :: cout << "Found '" << target 
                    << "' starting at '" << result << "'\n";

        // Increment result, otherwise we'll find target at the same location 
        ++result;
        ++iterations;
    }

    std :: cout << "iterations : " << iterations << std :: endl;

    /* ======================Finding last occurance==================== */

    std :: cout << std :: endl;
    std :: cout << "std :: strchr : " << std :: endl;

    //doc : https://en.cppreference.com/w/cpp/string/byte/strrchr

    char input[] = "/home/user/hellp.cpp";
    char *output = std :: strrchr(input,'/');

    if(output)
        std :: cout << output+1 << std :: endl;     // +1 because we want to start printing past
                                                    // the character found by std :: strrchar.










    

    system("pause");
    return 0;
}

