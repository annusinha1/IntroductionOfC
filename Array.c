// #include <stdio.h>
// int  main() {
//     int i;
//     int arr [5];
//     for(i=0; i<6; i++){    
//      printf("enter the value : ");
//     scanf( "%d \n", &arr[i]);  
//     } 
//     //displaying elements of array using a loop
//     for(i =0 ; i<5 ; i++) { 
//         printf("%d \n",arr[i] );    
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i ; 
//     int arr[]= {12, 56, 55, 67, 23};
//     for(i=0; i<5; i++){
//         printf("%d \n", arr[i]);
        
//     }
//     return 0;
// }


// Find Maximum and Minimum Value
#include <stdio.h>
int main(){
    int number[] = {120, 50, 30, 68, 43, 80};
    int max = number[0];
    int min = number[0];

    for(int i=1; i<6; i++){
        if (number[i]>max){
            max= number[i];        // Maximum Value
        }
    }

    for( int i=1; i<6; i++ ){
        if(number[i]<min){
            min = number[i];      // Minimum value
        }
    }
    printf(" \n maximum no is : %d ", max );
    printf(" \n minimum no is : %d", min);

    return 0;

}