#include<stdio.h>
int main(){
    int n ;
    // WRITE VALUE OF n
    printf("Enter the number" );
    scanf("%d" ,&n);
    // FORMULA IS : Sum = n * (n + 1) /2
    // USING THE FORMULA TO FIND SUM & FINDING RESULT
    printf("Sum of first n natural numbers is : %d" , n * (n + 1) / 2);

    return 0;
}
