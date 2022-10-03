#include<iostream>
int main(){
    
    int array[] {12,34,45,62,2,5,3,6,1};
    

    int size = (sizeof(array)/sizeof(array[0]));

    for(int i =0; i<size-1 ; i++){
        for(int j = i+1; j<size; j++){
            if(array[i] > array[j]){
                int temp = array[j];
                array[j] = array [i];
                array [i] = temp;
            }
            

        }
    }

    std :: cout << "The sorted array is: " << std :: endl;
    for(int i = 0; i<size-1; i++){
        std :: cout <<  " "  << array[i] << std :: endl;
    }

 

    system("pause");
    return 0;
}

