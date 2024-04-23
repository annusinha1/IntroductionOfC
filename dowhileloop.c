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

    // //table program using while loop
    // int num, i=1;
    // printf("Enter a no.: ");
    // scanf("%d", &num);
    // do{
    //      printf("%d * %d = %d \n" ,num, i,  num*i);
    //      i++;
    // }while (i<=20);
    // return 0;


    // number guessing game using while loop
    int num, guess, i;
    num=21; 
    i=1;
    do{
        printf("\nTake a guess (between 1 and %d): ", num);    
        scanf("%d",&guess);
        if (guess == num) {
            printf("Congratulations! You guessed the right number!\n");
        } else if (guess > num) {
            printf("Your guess is too high. Try again:\n");
        }
        else{
            printf("Your guess is too low. try again.\n");
        }
        ++i;
    }  while(guess != num && i <= num);

    return 0;


}