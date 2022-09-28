#include<iostream>
#include <cstring>
int main(){
    
    std :: cout << "std :: strcat :" << std :: endl;

    char dest[50] = "Hello";
    char src[50] = " World!";

    std :: strcat(dest,src); // Some compilers (MSVC) thinks this functions are unsafe!
    std :: cout << "dest: " << dest << std :: endl;
    std :: strcat(dest, " Goodbye World!");
    std :: cout << "dest : " << dest << std :: endl;

    // More concatenation

    std :: cout << std :: endl;
    std :: cout << "More std :: strcat : " << std :: endl;

    char *dest1 = new char[30] {'F','i','r','e','l','o','r','d','\0'};
    char *source1 = 
        new char[30] {',','T','h','e',' ','P','h','o','e','n','i','x', ' ', 'K','i','n','g','!','\0'};

    
    //NOTE TO SELF
            // Describe what's going to happen in std::strcat before you do the cat: 
            // source is going to be appeneded to dest, and the process
            // will start by overriding the null character in dest

    std :: cout << "std :: strlen(dest1) :" << std :: strlen(dest1) << std ::endl;
    std :: cout << "std :: strlen(source1) : " << std :: strlen(source1) << std :: endl;

    std :: cout << "Concatenating..." << std :: endl;
    std :: strcat(dest1, source1);

    std :: cout << "std :: strlen(dest1) : " << std :: strlen(dest1) << std :: endl;
    std :: cout << "dest1 : " << dest1 << std :: endl;


    /* ====================Specifiing how many character I want to concatenate ============ */

    std :: cout << std :: endl;
    std :: cout << "std :: strncat :" << std :: endl;

    char dest2[50] {"hello"};

    char source2[30] {" there is a bird on my window"};

    // you can even use the returned pointer immediately for print out 
    // This is a pattern you'll see a lot in c++ code out there. 

    std :: cout << std :: strncat(dest2,source2,6) << std :: endl;

    // or you can do std :: strncat separately and print dest2

    std :: strncat(dest2,source2,3);
    std :: cout << "The concatenated string is : " << dest2 << std ::endl;

    /* ========================string copy ==============================*/
    std :: cout << std :: endl;
    std :: cout << "std :: strcpy : " << std :: endl;

    const char* source3 = "C++ is a multipurpose programming language. ";

    char *dest3 = new char[std:: strlen(source3) + 1]; /* +1 for the null character 
                                                            contains garbage data 
                                                            not initialized */

    std :: strcpy(dest3,source3);

    std :: cout << "sizeof(dest3) :" << sizeof(dest3) << std :: endl;
    std :: cout << "std :: strlen(dest3) : " << std :: strlen(dest3)  << std :: endl;
    std :: cout << "dest3 : " << dest3 << std :: endl;

/* ========================= Coping seleted numbers of element==================== */
    
    std :: cout << std :: endl;
    std :: cout << "std :: strncpy : " << std :: endl;

    const char* source4 = "Hello";

    char dest4[] = {'a', 'b','c','d','e','f','\0'}; /* Have to put the terminating 
                                                        null char if we want to print*/

    std :: cout << "dest4 : " << dest4 << std :: endl;

    std :: cout << "Coping......."  << std :: endl;



    std :: strncpy(dest4,source4,5);
    std :: cout << "dest4 : " << dest4 << std :: endl;


    system("pause");
    return 0;
}

