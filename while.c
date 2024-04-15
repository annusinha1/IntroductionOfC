#include <stdio.h>
int main(){
    //reverse no. in while loop
    int i,num,rev=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i=num;
    while(i>0){
          remainder = i % 10;
        rev = rev * 10 + remainder;
        i = i / 10;
    }
    
    printf("Reversed number: %d\n", rev);

    
}