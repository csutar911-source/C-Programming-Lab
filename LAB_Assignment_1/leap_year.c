#include<stdio.h>
int main(){
    int year;

// We Need To Enter a Year 
printf("Enter year : ");
scanf("%d" ,&year);

/* A Leap Year is : (1) divisible by 4 and not by 100 
                    (2) divisible by 400
*/   
if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)) {
    printf("%d is a leap year \n" , year);
}  else {
    printf("%d is not a leap year \n" , year);
}        
    return 0;
}