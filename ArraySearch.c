#include <stdio.h>
int main(){
    int arr[5]= {20, 89, 36, 548, 68};
    int i, a;
    printf("Enter the number you want to search for: ");
    scanf("%d", &a);
    for(i=0; i<5; i++){
        if (arr[i] == a)
            printf("\n Search Found");

        else
            printf("\n Not Found");

        break;
    }
    return 0;   
}