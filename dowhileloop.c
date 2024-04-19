#include <stdio.h>
int main(){
    //   //sum of all natural no.
    // int i, sum, num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // i=1 ;
    // do { 
    //     printf(" %d ");
    //     i++;   
    // }while(i <= num );   
    //   sum+=i;
    // printf("\n\n Sum is :%d",sum);
    // return 0;


    // //factorial
    // int i , mul=1;
    // printf( "Enter the value of mul :" ) ;
    // scanf( "%d" , &mul) ;
    // i=1;
    // do{
    //       mul*=i;
    //     // printf(" %d ");
    //     i++;
    // }while(i<= mul);
     
    //     printf("%d",mul);
    //     return 0;

    //table program using while loop
    int num, i=1;
    printf("Enter a no.: ");
    scanf("%d", &num);
    do{
         printf("%d * %d = %d \n" ,num, i,  num*i);
         i++;
    }while (i<=20);
    return 0;

}