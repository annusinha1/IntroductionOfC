#include <stdio.h>
int main(){
    //reverse no. in while loop
    int num,rev=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
          remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    
    printf("Reversed number: %d\n", rev);

    
}