#include <stdio.h>
    int num_fun(int);
    int main(){
        int num;
        printf("Enter a number :");
        scanf("%d", num);
    num_fun(num);
        return 0;
    }
    int num_fun(int num){
        if(num%2==0){
        printf ("It is an even number");
    }
    else
    printf("It is an odd number");
    }
