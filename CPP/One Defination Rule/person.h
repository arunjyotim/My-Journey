#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{

public : 
    Person(const std::string& names_parameter, int age_parameter);

    void print_info()const{
        std :: cout << "name : " << full_name << " , age : " << age << std :: endl;
    }

private :
    std :: string full_name;
    int age;

public :
    //static variable declartion
    static int person_count;

};

#endf // PERSON_H