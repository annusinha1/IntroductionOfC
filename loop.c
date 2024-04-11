#include <stdio.h>
int main(){
    // //sum of all natural no.
    // int i, sum;
    // for(i=1;i<=30;i++){
    //     sum+=i;
    // }
    // printf("%d \n",i);
    // return 0 ;

    // //factorial
    //    int i, mul=1;
    // for(i=1;i<=5;i++){
    //     mul*=i;
    // }
    // printf("%d \n",mul);
    // return 0 ;

    // //TABLE program
    // int i,num;
    // printf("Enter a no. ");
    // scanf("%d", &num);
    // for(i=1; i<=10; i++){
    //     printf("%d * %d = %d \n", num,i , (num*i));
    // }
    // return 0;


    // Square No.
    int i, n;
    printf("Enter a number :");
    scanf("%d", &n);

    for(i=n; i<=n; i++){
        printf("%d square is %d ", i,(i*i));
    }
    return 0;

}