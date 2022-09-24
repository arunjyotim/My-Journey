#include<iostream>
int main(){

    signed int value1{10};
    signed int value2{-100};

    std :: cout << "Value1 :" << value1 << std :: endl;
    std :: cout << "Value2 :" << value2 << std :: endl;
    std :: cout << "Size of value 1: " << sizeof(value1) << std:: endl;
    std :: cout << "Size of value 2: " << sizeof(value2) << std:: endl;

    //unsigned int value{4};
    //signed int value{-1};

    // short and long
    short shortVar{-32768}; // 2 Bytes
    short int shortInt{456};
    signed short signedShort{122};
    signed short int signedShortInt{-456};
    unsigned short int unsignedShortInt{456};

    int intVar{55}; // 4 Bytes
    signed signedVar{66};
    signed int signedInt{77};
    unsigned int unsignedInt{77};

    long longVar{88}; // 4 or 8 Bytes
    long int longInt{33};
    signed long signedLong{44};
    signed long int singedLongInt{44};
    unsigned long int unsignedLongInt{44};

    long long longLong{888};
    long long int longLongInt{999};
    signed long long singedLongLong{444};
    signed long long int signedLongLongInt{1234};
    unsigned long long int unsignedLongLongInt{1234};

    std :: cout << "Short variable: " << shortVar << ", size: "
         << sizeof(short) << " bytes" << std::endl;
    std :: cout << "Short Int: " << shortInt << " , size of : "
        << sizeof(short int ) << " bytes" << std :: endl;
    std :: cout << "Signed short : " << signedShort << ", size of: "
        << sizeof(signed short) << " bytes" << std:: endl;
    std :: cout << "Signed short int : " << signedShortInt << " , size of "
        << sizeof(signed short int) << " bytes" << std:: endl;
    std :: cout << "Unsigned short int : " << unsignedShortInt << " , size of :"
        << sizeof(unsigned short int) << " bytes" << std:: endl;
 



    system("pause");
    return 0;
}