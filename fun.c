// Even & Odd program using function in C
#include <stdio.h>
    int num_fun(int);
    int prime(int);
    int main(){
        int num;
        printf("Enter a number :");
        scanf("%d", num);
        num_fun(num);
        prime(num);
        return 0;
    }
    int num_fun(int num){
        if(num%2==0){
        printf ("It is an even number \n");
    }
    else
    printf("It is an odd number \n");
    }

    int  prime(int num) {
    int i, n, flag;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("is a prime number.\n", n);
    else
        printf("is not a prime number.\n", n); 
    }
