#include <stdio.h>
int  main() {
    int i;
    int arr [5];
    for(i=0; i<6; i++){    
     printf("enter the value : ");
    scanf( "%d \n", &arr[i]);  
    } 
    //displaying elements of array using a loop
    for(i =0 ; i<5 ; i++) { 
        printf("%d \n",arr[i] );    
    }
    return 0;
}

// #include <stdio.h>
// int main(){
//     int i ; 
//     int arr[]= {12, 56, 55, 67, 23};
//     for(i=0; i<5; i++){
//         printf("%d \n", arr[i]);
        
//     }
//     return 0;
// }