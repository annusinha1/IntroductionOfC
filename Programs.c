// // To check prime no.
// #include <stdio.h>
// int prime(int);
// int main(){
//     int num ;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     prime (num);
//     return 0;
// }  
// int prime(int num){
//     int i, n, a;
//     for(i=2; i <= n/2; i++){
//         if(n % i == 0) {
//             a=1;
//             break;
//         }
//     }
//         if(a==0){
//             printf("It is a prime no. ");
//         } else{
//             printf ("It is not a prime number");
//         }
    
// }


// // Sum to natural no.
// #include <stdio.h>
// int sum(int,int);
// int main(){
//     int a,b;
//     printf("Enter a two digits : ");
//     scanf("%d %d", &a,&b);
//     return 0;
// }
// int sum(int a, int b){
//     int i, sum;
//     for(i=1;i<=30;i++){
//         sum+=i;
//     }
// }


// // Write a program using functions to find average of three number
// #include <stdio.h>
// int average(int, int, int);

// int main(){
//     int x, y, z;
//     printf("Enter three numbers:\n");
//     scanf("%d%d%d",&x,&y,&z);
//     printf("Average of given numbers=%d",average(x,y,z));
//     return 0;
// }
// int average(int x, int y, int z){
//     return ((x+y+z)/3);
// }


// write a function to convert celcius temperature into fahrenheit
#include <stdio.h>
float Fah(float);
int main(){
    float celsius;
    printf("Enter the temperature in Celsius : ");
    scanf("%f", &celsius);
    printf("\nTemperature in Fahrenheit = %f ",Fah(celsius));
    return 0;
}
float Fah(float celsius) {
 return (celsius * 9 / 5) + 32;
}

