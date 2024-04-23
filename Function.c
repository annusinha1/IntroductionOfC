// #include <stdio.h>
// void msg();
// int main(){
//     msg();
//     return 0;
// }
// void msg(){
//     printf("good morninng");
// }


// #include <stdio.h>
// int sum();
// int main(){
//     sum();
//     return 0;
// }
// int sum(){
//     int a,b,sum;
//     a=10;
//     b=20;
//     sum = a+b;
//     printf("%d",sum);
// }


#include <stdio.h>
int sum(int,int);
int sub(int,int);
int multi(int,int);
int main(){
    int a,b,x1,x2,x3;
    printf("Enter a two digits : ");
    scanf("%d %d", &a,&b);
    x1 = sum(a,b);
    printf(" the sum is: %d \n", x1);
    x2= sub(a,b);
    printf(" the difference is:%d \n", x2);
    x3= multi(a,b);
    printf(" the product is: %d \n",x3);
    return 0;
}
int sum(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}

