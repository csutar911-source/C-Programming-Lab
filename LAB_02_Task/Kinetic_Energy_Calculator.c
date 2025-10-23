  
  //    QUOTIENT & REMAINDER  CALCULATOR    //

#include<stdio.h>
int main(){
    int a , b;
    printf("Enter value of a =" );
    scanf("%d" , &a);
    printf("Enter value of b =");
    scanf("%d" , &b);
     int remainder = a % b;
     printf("Quotient is : %d \n" , a / b);
     printf("Remainder is : %d" , a % b);

    return 0;
}