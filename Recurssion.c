// // factorial in recursion
// #include <stdio.h>
// int factorial(int);
// int main(){
//     int a, x;
//     printf("Enter a number :");
//     scanf("%d", &x);
//     a = factorial(x);
//     printf("the fac. is : %d", a);
//     return 0;
// }
// int factorial(int x){
//     int f;
//     if(x==0){
//         return 1;
//     }
//     else{
//         return x*factorial(x-1);
        
//     }
// }

// Sum of natural number in recursion
#include <stdio.h>
int main(){
    int x,a;
    printf("Enter the no. ");
    scanf("%d", &x);
    a= sum(x);
    printf("%d", a);

}
int sum(int x){
    int n, res;
    if(n==0){
        return 0;
    }else{
        res = n + sum(n-1);
        return res;
    }
}


