#include <stdio.h>
int  main() {
    //Voting Program
    // int age;
    // // age = 32;  // if age is taken
    // printf("Enter your age: ");
    // scanf(" %d", &age);
    // if(age>=18){
    //     printf("You are eligible to vote") ;
    // } 
    // else 
    // printf("Sorry, you are not eligible to vote" );
    // return 0;

    // //Pass fail program 
    // int marks;
    // printf("Enter your marks");
    // scanf("%d", &marks);
    // if(marks>=30){
    //     printf(" Your result is pass");
    // }
    // else
    // printf("Your result is fail");
    // return 0;

    // // Even and Odd program
    // int  num;
    // printf("Enter a number : ");
    // scanf("%d",&num);
    // if(num%2==0){
    //     printf ("It is an even number");
    // }
    // else
    // printf("It is an odd number");
    // return 0;

    // // Divisibility Check
    int num; 
    printf("Enter any number: ");
    scanf("%d", &num);
    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
        printf("Number is not divisible by 5 and 11");
    return 0;

    // //Check leap year
    // int year;
    // printf("Enter a year :");
    // scanf("%d", &year);
    // if(year % 4 == 0){
    //     printf("It is a leap year");
    // }
    // else
    //     printf("It is not a leap year");    
    //     return 0;

}