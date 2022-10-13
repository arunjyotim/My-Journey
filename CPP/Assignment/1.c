#include <stdio.h>

int upper(int N, int A[],int S);
int lower(int N, int A[],int S);
//int lower(int N,int *A[N],int S);

int main()
{
    int A[100000];
    int N, S;
    //printf("Enter Array size: ");
    scanf("%d%d", &N,&S);
    //scanf("%d", &S);
    
    for(int i = 0; i<N; i++){
        scanf("%d", &A[i]);
    }
    
    //printf("Element entered.");

    // for(int i = 0; i<N; i++){
    //     printf("%d ",A[i]);
    // }
    
    
    printf("%d", upper(N, A, S));
    printf(" %d", lower(N, A, S));
    //lower(N, A[N], S);
    
    
    
    
    return 0;
}

int upper(int N, int A[], int S){
    
    // for(int i = 0; i<N; i++){
    //     printf("%d ",A[i]);
    // }
    
    // printf("%d", S);
    int index = 0;
    for(int i = 0; i<N; i++){
        
        if(A[N - 1] < S){
            return N;
        }else if (A[i] > S){
        //     int j = ++i;
        //   printf("%d.\n",j);
        //printf("%d./", i);
            for(int j = i + 1; j < N  ; j++){
               // printf("%d./", i);
                if(A[i] == A[j]){
                    index = j;
                }
            }
            //printf("%d./", i);
            if(A[index] > S){
                return index;
            }else
                return i;
             //return i;
        }
        
        // for (int j = ++i ; j < N - 1; j++ ){
        //     printf("%d.\n", j);
        //     if(A[i] > S){
        //         if(A[i] == A[j]){
        //             return j;
        //         }else{
        //             return i;
        //         }
                    
        //     }
        // }
        
        // if(A[i] > S){
        //     j = ++i;
        //     printf("%d.\n", j);
            
        //     if(A[i] == A[j]){
        //         return j;
        //     }else{
        //         return i;
        //     }
        //     // printf("%d", i);
            
        // }
    }
}

int lower(int N, int A[],int S){
    
    int index = 0;
    
    for(int i = 0; i < N ; i++){
        
        
        
        // if(A[0] > S){
        //     return index;
        // }else if (A[i] <= S){
        //     printf("printing");
        //     return i; 
        // }
        
    }
    
}