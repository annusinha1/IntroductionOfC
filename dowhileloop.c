#include <stdio.h>
int main(){
      //sum of all natural no.
    int i, sum, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=1 ;
    do { 
        printf(" %d ");
        i++;   
    }while(i <= num );   
      sum+=i;
    printf("\n\n Sum is :%d",sum);
    return 0;
   
}