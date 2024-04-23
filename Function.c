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


// #include <stdio.h>
// int sum(int,int);
// int sub(int,int);
// int multi(int,int);
// int main(){
//     int a,b,x1,x2,x3;
//     printf("Enter a two digits : ");
//     scanf("%d %d", &a,&b);
//     x1 = sum(a,b);
//     printf(" the sum is: %d \n", x1);
//     x2= sub(a,b);
//     printf(" the difference is:%d \n", x2);
//     x3= multi(a,b);
//     printf(" the product is: %d \n",x3);
//     return 0;
// }
// int sum(int a, int b){
//     return a+b;
// }
// int sub(int a, int b){
//     return a-b;
// }
// int multi(int a, int b){
//     return a*b;
// }


#include <stdio.h>
int bonus (int salary);
int pf (int salary);
int esi (int salary);
int main(){
    int salary;
    printf ("Enter your salary : ");
    scanf("%d", salary);
    bonus(salary);
    pf(salary);
    esi(salary);
    return 0;
}
int bonus (int salary){
    int bonus;
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
    printf(" Bonus is: %d \n", bonus);
}
int pf(int salary){
    int pf;
    pf = salary - 10/100;
    printf("Deducted pf is: %d \n", pf);
}
int esi(int salary){
    int esi;
    esi = salary - 470;
    printf("Deducted esi is %d \n", esi);
}
