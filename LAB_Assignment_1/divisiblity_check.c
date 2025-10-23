#include<stdio.h>
int main(){
    int Number;
    // WRITING A DESIRED NUMBER
    printf("Enter a number : ");
    scanf("%d" ,&Number);

    // NOW WE WILL CHECK IF NUMBER IS DIVISIBLE BY BOTH 5 & 11 OR NOT
    if (Number % 5 == 0 && Number % 11 == 0) {
        printf("%d is divisible by both 5 and 11 \n" , Number);
    }
    else {
        printf("%d is not divisible \n" , Number);
    }
    return 0;
}