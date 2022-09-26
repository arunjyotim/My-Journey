#include<iostream>
#include <iomanip>

int main(){

    //std :: flush          flush the output stream

    // header ---------------<iomanip>

    // std :: setw()        specifies the width value of data
    // std :: setprecision  shows the digit as the precision value is set. 
    // std :: setfill()     fill the gap with the selected character

    // header ---------------<ios>

    // std :: right         data will be right justified
    // std :: left          data will be left justified
    // std :: internal      data will be interanlly positioned as : sign is left justified : data is right justified
    // std :: boolalpha     force showing the boolean output as the the actual "true" or "false" value
    // std :: noboolalpha   opposite of boolalpha
    // std :: showpos       show or hide the + sign for the positive numbers
    // std :: noshowpos     does the opposite of showpos
    // std :: dec           shows data in decimal format
    // std :: oct           shows data in octal format
    // std :: hex           shows data in hexadecimal format
    // std :: showbase      shows the base for integral types
    // std :: uppercase     show data in uppercase
    /* std :: scientific[default format]            it can be used to force show the data in the scientific format
        std :: fixed        shows data in the fixed format without the scitific sign */  
    // std :: showpoint     show trailing zeros if necessary



    std :: cout << "Hello World\n" << std :: endl;

    std :: cout << "This is a nice message... "<< std :: endl << std :: flush;

    // format manipulation 


    std :: cout << "Formatted table : " << std :: endl;

    
    std :: cout << std :: setw(10) << "LastName"    << std :: setw(10) << "FirstName"       <<std :: setw(5) << "Age"<< std :: endl;
    std :: cout << std :: setw(10) << "Mondal"      << std :: setw(10) << "ArunJyoti"       <<std :: setw(5) << "23" << std :: endl;
    std :: cout << std :: setw(10) << "Khan"        << std :: setw(10) << "Iftekhar"        <<std :: setw(5) << "23" << std :: endl;
    std :: cout << std :: setw(10) << "Jahan"       << std :: setw(10) << "Nourin"          <<std :: setw(5) << "23" << std :: endl;

    std :: cout << "Formatted table : \n " << std :: endl;

    int colWidth = 10;
    std :: cout << std :: setw(colWidth) << "LastName"    << std :: setw(colWidth) << "FirstName"       <<std :: setw(colWidth) << "Age"<< std :: endl;
    std :: cout << std :: setw(colWidth) << "Mondal"      << std :: setw(colWidth) << "ArunJyoti"       <<std :: setw(colWidth) << "23" << std :: endl;
    std :: cout << std :: setw(colWidth) << "Khan"        << std :: setw(colWidth) << "Iftekhar"        <<std :: setw(colWidth) << "23" << std :: endl;
    std :: cout << std :: setw(colWidth) << "Jahan"       << std :: setw(colWidth) << "Nourin"          <<std :: setw(colWidth) << "23" << std :: endl;
    

    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Left Justified : \n" << std :: endl;

   
    std :: cout << std :: left;
    std :: cout << std :: setw(colWidth) << "LastName"    << std :: setw(colWidth) << "FirstName"       <<std :: setw(colWidth) << "Age"<< std :: endl;
    std :: cout << std :: setw(colWidth) << "Mondal"      << std :: setw(colWidth) << "ArunJyoti"       <<std :: setw(colWidth) << "23" << std :: endl;
    std :: cout << std :: setw(colWidth) << "Khan"        << std :: setw(colWidth) << "Iftekhar"        <<std :: setw(colWidth) << "23" << std :: endl;
    std :: cout << std :: setw(colWidth) << "Jahan"       << std :: setw(colWidth) << "Nourin"          <<std :: setw(colWidth) << "23" << std :: endl;


    // Internal Justified : sign is left justified, data is right justified 

    std :: cout << std :: endl;
    std :: cout << "Internal justified: " << std :: endl;

    std :: cout << std :: right ;
    std :: cout << std :: setw(10) << -123.45 << std :: endl;
    std :: cout << std :: internal;
    std :: cout << std :: setw(10) << -123.45 << std :: endl;


    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Set Fill : \n" << std :: endl;

   
    std :: cout << std :: left;
    std :: cout << std :: setfill('-'); // the fill character
    std :: cout << std :: setw(colWidth) << "LastName"    << std :: setw(colWidth) << "FirstName"       <<std :: setw(colWidth) << "Age"<< std :: endl;
    std :: cout << std :: setw(colWidth) << "Mondal"      << std :: setw(colWidth) << "ArunJyoti"       <<std :: setw(colWidth) << "23" << std :: endl;
    std :: cout << std :: setw(colWidth) << "Khan"        << std :: setw(colWidth) << "Iftekhar"        <<std :: setw(colWidth) << "23" << std :: endl;
    std :: cout << std :: setw(colWidth) << "Jahan"       << std :: setw(colWidth) << "Nourin"          <<std :: setw(colWidth) << "23" << std :: endl;


    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "usecase of boolalpha" << std :: endl;

    bool condition{true};
    bool other_condition{false};

    std :: cout << "condition : " << condition << std :: endl;
    std :: cout << "other_condition: " << other_condition << std :: endl;

    std :: cout << std :: endl;
    std :: cout << std :: boolalpha;

    std :: cout << "condition : " << condition << std :: endl;
    std :: cout << "other_condition: " << other_condition << std :: endl;

    std :: cout << std :: endl;
    std :: cout << std :: noboolalpha;

    std :: cout << "condition : " << condition << std :: endl;
    std :: cout << "other_condition: " << other_condition << std :: endl;

    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Usecase of showpos : \n" << std :: endl;

    int pos_num{34}; 
    int neg_num{-45};

    std :: cout << "pos_num : " << pos_num << std :: endl;
    std :: cout << "neg_num : " << neg_num << std :: endl; 

    std :: cout << std :: endl;
    std :: cout << std :: showpos;

    std :: cout << "pos_num : " << pos_num << std :: endl;
    std :: cout << "neg_num : " << neg_num << std :: endl; 

    std :: cout << std :: endl;
    std :: cout << std :: noshowpos;

    std :: cout << "pos_num : " << pos_num << std :: endl;
    std :: cout << "neg_num : " << neg_num << std :: endl; 


    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Usecase of numberbase : \n" << std :: endl;

    int pos_int{7171234};
    int neg_int{-3452454};
    double double_var{498.32};

    std :: cout << std :: endl;
    std :: cout << "default base format :" << std :: endl;
    std :: cout << "pos_int : " << pos_int <<  std :: endl;
    std :: cout << "neg_int : " << neg_int <<  std :: endl;
    std :: cout << "double_var: " << double_var << std :: endl;


    std :: cout << std :: endl;
    std :: cout << "Int different base format :" << std :: endl;
    std :: cout << "pos_int : " << std :: dec << pos_int << std :: endl;
    std :: cout << "neg_int : " << std :: hex << neg_int << std :: endl;
    std :: cout << "double_var: " << std :: oct << double_var <<  std :: endl;   


    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Usecase of numberbase   & uppercase: \n" << std :: endl;



    std :: cout << std :: endl;
    std :: cout << "default base format :" << std :: endl;
    std :: cout << "pos_int : " << pos_int <<  std :: endl;
    std :: cout << "neg_int : " << neg_int <<  std :: endl;
    std :: cout << "double_var: " << double_var << std :: endl;


    std :: cout << std :: endl;
    std :: cout << "Int different base format (UPPERCASE) :" << std :: endl;
    std :: cout << std :: uppercase;
    std :: cout << "pos_int : " << std :: dec << pos_int << std :: endl;
    std :: cout << "neg_int : " << std :: hex << neg_int << std :: endl;
    std :: cout << "double_var: " << std :: oct << double_var <<  std :: endl;   

    

    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Fixed and scientific : \n" << std :: endl;

    double a{3.1415926535897932384626433832795 };
    double b{ 2006.0};
    double c{ 1.34e-10};

    std :: cout << std :: endl;
    std :: cout << "double values (default : use scientific where necessary ): " << std :: endl;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;


    std :: cout << std :: endl;
    std :: cout << "double values (fixed ): " << std :: endl; 
    //std :: cout << std :: fixed; 
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "double values (scientific ): " << std :: endl; 
    //std :: cout << std :: scientific; 
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "double values (back to default ): " << std :: endl; 
    //std :: cout.unsetf(std::ios:scientific | std :: ios :: fixed ) ; // Hack
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;



     //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Setprecision : \n" << std :: endl;

    a = 3.1415926535897932384626433832795;

    std :: cout << std :: endl;
    std :: cout << "a (default precision(6)) : " << a << std :: endl;
    std :: cout << std :: setprecision(10);
    std :: cout << "a (precision(10)) : " << a << std :: endl;
    std :: cout << std :: setprecision(20);
    std :: cout << "a (precision(20)) : " << a << std :: endl;


    //=================================================================

    std :: cout << std :: endl;

    std :: cout << "Setprecision : \n" << std :: endl;

    double d{34.1};
    double e{101.99};
    double f{12.0};
    int     g{45};

    std:: cout << std :: endl;
    std :: cout << "Noshowpoint (default) : " << std :: endl;
    std :: cout << "d : " << d << std :: endl;
    std :: cout << "e : " << e << std :: endl;
    std :: cout << "f : " << f << std :: endl;
    std :: cout << "g : " << g << std :: endl;

    std:: cout << std :: endl;
    std :: cout << "Showpoint: " << std :: endl;
    std :: cout << std :: showpoint;
    std :: cout << "d : " << d << std :: endl;
    std :: cout << "e : " << e << std :: endl;
    std :: cout << "f : " << f << std :: endl;
    std :: cout << "g : " << g << std :: endl;








    



 


    system("pause");
    return 0;
}