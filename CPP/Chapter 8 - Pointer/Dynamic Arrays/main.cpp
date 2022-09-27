#include<iostream>
int main(){
    
const size_t size{10};

    /* Different ways you can declare an array
        Dynamically and how they are initialized */

    double *pSalaries{new double{size}}; // Salaries array will contain garbage values

    int *pStudents{new(std::nothrow) int[size]{}}; // All values initialized to 0

    double *pScores{new (std :: nothrow) double[size]{1,2,3, 4,5,}}; /* Allocating memory space
                                                                        for an array of size double vars. 
                                                                        First 5 will be initialized with
                                                                        1, 2, 3, 4, 5 and the rest will be 0's */


    // nullptr check and use the allocated array
    if(pScores){
        std:: cout << "size of scores (it's a regular pointer) : " << sizeof(pScores)<< std:: endl;
        std :: cout << "Successfully allocated memory for scores." << std :: endl;

        // Print out elements. Can use regular array access notation, or pointer arithmetic

        for(size_t i{}; i<size ; ++i){
            std :: cout << "value: " << pScores[i] << " : " << *(pScores + i) << std :: endl;
        }
    }


    delete[] pSalaries;
    pSalaries = nullptr;
    
    delete[] pScores; 
    pScores = nullptr;

    delete[] pStudents;
    pStudents = nullptr;


    /* Static vs Dynamic Arrays */

    int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count {sizeof(scores)/sizeof(scores[0])};

    std :: cout << "Score Size : " << count << std :: endl;

    for(auto i : scores){
        std :: cout << "value : " << i << std :: endl;
    }
    system("pause");
    return 0;
}