#include <stdio.h>
int main(){
    int P,R,T,SI;
    // P=100000; // Using in normal way
    // R=5;
    // T= 2;
    // SI= P*R*T/100;
    printf("Enter Principle amount:");
    scanf("%d",&P);
    printf("\nEnter rate of interest:");
    scanf(" %d",&R);
    printf("\nEnter time:") ;
    scanf( " %d", &T) ;
    SI = P * R * T / 100;
    printf("simple interest is %d%d%d",SI);
}