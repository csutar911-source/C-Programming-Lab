#include<stdio.h>
int main(){
    float Number1 , Number2 , Number3;

    // TAKING NUMBERS FROM USER 
    printf("Enter value of first number :");
    scanf("%f" , &Number1);
    printf("Enter value of second number :");
    scanf("%f" , &Number2);
    printf("Enter value of third number :");
    scanf("%f" , &Number3);
    
    // HERE WE WILL BE CHECKING WHICH NUMBER IS LARGEST
    if(Number1 >= Number2 && Number1 >= Number3) {
        printf("Largest number is %f\n" ,Number1);
    }
    else if(Number2 >= Number1 && Number2 >= Number3){
        printf("Largest number is %f\n" ,Number2);
    }
    else {
        printf("Largest number is %f\n" ,Number3);
    }
    return 0;
}