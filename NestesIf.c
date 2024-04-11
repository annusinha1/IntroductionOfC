#include <stdio.h>
int main(){
    // int marks;
    // printf ("Enter your marks: ");
    // scanf("%d", &marks);
    // if(marks>90 && marks<=100){
    //     printf( "Grade=A+");
    // }
    // if(marks>80 && marks<=90){
    //     printf("Grade=A");
    // }
    // if(marks>70 && marks<=80){
    //     printf ( "Grade=B+");
    // }
    // if (marks>60 && marks<=70){
    //     printf ( "Grade=B");
    // }
    // if (marks>50 && marks <= 60){
    //     printf( "Grade=C+");
    // }
    // if(marks>40 && marks<=50){
    //     printf( "Grade=C");
    // }
    // if(marks>30 && marks<=40) {
    //     printf ("Grade=D");
    // }
    // if(marks>20 && marks<=30){
    //     printf("Fail");
    // }
    // return 0;


    int salary, bonus;
    printf("Enter your salary");
    scanf("%d", &salary);
    if(salary>75000 && salary<=100000)
        bonus = salary*25/100;
    if (salary>70000 && salary<=75000)
        bonus = salary*22/100;
    if(salary>60000 && salary<=70000)
         bonus = salary*20/100;
    if(salary>50000 && salary<=60000)
         bonus = salary*17/100;
    if(salary>30000 && salary<=50000)
         bonus = salary*15/100;
    if(salary>10000 && salary<=30000)
         bonus = salary*10/100;
    if (salary>5000 && salary<=10000)
         bonus = salary*5/100;
    
    printf("bonus is = %d", bonus);
    return 0;

}