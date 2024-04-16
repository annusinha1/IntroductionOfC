#include<stdio.h>
int main(){
    // Hcf using for loop
    // int a,b,i,hcf;
    // printf("Enter the value of 'a': ");
    // scanf("%d",&a);
    // printf("Enter the value of 'b': ");
    // scanf( "%d", &b);
    // for(i=1; i<=a||i<=b; i++){
    //     if(a%i==0 && b%i==0)
    //     hcf = i ;
    // }
    //         printf("%d",hcf);

    // return 0;

    // hcf using while loop
    int a,b,i,hcf;
    printf("Enter the value of 'a': ");
    scanf("%d",&a);
    printf("Enter the  value of 'b': ");
    scanf("%d",&b);
    i=1;
    while(i<=a|| i<=b){
        if(a%i==0 && b%i==0)
        hcf=i;
        i++;
    }
    printf("%d",hcf);
    return 0;
}