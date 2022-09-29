#include "person.h"



double add(double a, double b){
    return a + b;
}

int Person :: person_count = 8;

Person :: Person(const std::string& names_parameter, int age_parameter)
    :full_name(names_parameter), age(age_parameter){
        ++person_count;
    }