#include <stdio.h>
int main(){
int time;
printf ("Enter a time");
scanf("%d", &time);
if(time>5 && time<=12)
printf("Good Morning");
else if(time>12 && time<=16)
printf("Good  Afternoon");
else if(time>=16  && time <=20)
printf("Good Evening");
else
printf("Good night");
return 0;
}
