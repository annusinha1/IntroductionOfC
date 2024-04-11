#include <stdio.h>
int main(){
    // //Vending Machine Program
    // int choice;
    // printf("Enter your choice : 1.Tea 2.Coffee 3.Juice ");
    // scanf("%d", &choice);
    // switch(choice){
    //     case 1: 
    //     printf("Tea price : Rs:20/-");
    //     break;
    //     case 2:
    //     printf("Coffee price : Rs:40/- ");
    //     break;
    //     case 3: 
    //     printf("Juice price : Rs:60/-");
    //     break;
    //     default:
    //     printf("Choose correct option");
    //     break;
    //     return 0;
    // }

    // //Days Program
    // int day;
    // printf("Enter a Day : 1.Sunday 2.Monday 3.Tuesday 4.Wednesday 5.Thursday 6.Friday 7.Saturday ");
    // scanf("%d", &day);
    // switch(day){
    //     case 1 :
    //     printf("It is Sunday.");
    //     break;
    //     case 2: 
    //     printf("It is Monday.");
    //     break;
    //     case 3:
    //     printf("It is Tuesday.");
    //     break;
    //     case 4:
    //     printf( "It is Wednesday." );
    //     break;
    //     case 5:
    //     printf("It is Thursday.");
    //     break;
    //     case 6:
    //     printf("It is Friday.");
    //     break;
    //     case 7:
    //     printf("It is Saturday.");
    //     break;
    //     default:
    //     printf("Choose Correct Day");
    //     break;
    //     return 0;
    // }

    //ATM  Machine Program
    int choice, bal, deposit, withdrew;
    printf("Enter Your Choice: 1.Check Balance 2.Deposit 3.Withdrawl");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
        bal += deposit;
        printf(" Your Current Balance is : 1000");
        break;
        case 2:
        printf("Deposit Amount : %d", bal);
        break;
        case 3:
        if (withdrew > bal) {
            printf("Sorry! You don't"); 
        }
        else
        {
        bal -= withdrew;
        printf("Your Withdrawn Amount ");    

        }
        break;
        default:
        printf("Sorry! something went wrong");
        break;
        return 0;
    }

}