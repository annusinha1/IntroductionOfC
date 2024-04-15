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


    // // Square No.
    // int i, n;
    // printf("Enter a number :");
    // scanf("%d", &n);

    // for(i=n; i<=n; i++){
    //     printf("%d square is %d ", i,(i*i));
    // }
    // return 0;

    // // fabionical series
    // int i, t1, t2, next;
    // t1=0;
    // t2=1;
    // next=t1+t2;
    // printf("%d \n %d\n", t1, t2);
    // for(i=3; i<=10; i++){
    //     printf("%d \n", next);
    //     t1 = t2;
    //     t2= next;
    //     next= t1+t2;
    //     }
    // return 0;


    //Reverse no. program (for loop)
    int  num, rev = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for ( num!=0; num /= 10;) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}