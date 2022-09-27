#include<iostream>
int main(){

    /* ===============Solution 1 : exception ============ */

   /*  for(size_t i {0} ; i < 100; ++i){

        try{
            int *lotOfInts = new int[100000000];
        }catch(std :: exception& ex) {
            std :: cout << "Something went wrong! : " << ex.what() << std :: endl;
        }
        
    } */

    /* ===============Solution 2 : std :: nothrow ============ */

    for(size_t i {0} ; i < 100; ++i){

       int *lotOfInts = new(std::nothrow) int[100000000];

       if(lotOfInts!= nullptr){
        std :: cout << "Data is allocated" << std :: endl;
       }else{
        std :: cout << "Data allocation failed" << std :: endl;
       }
        
    }


    


    std :: cout << "Program ending well" << std :: endl;


    system("pause");
    return 0;
}