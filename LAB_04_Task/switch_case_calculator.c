#include<stdio.h>
int main(){
    float number1  , number2;
    char oprt;
    printf("enter 1st Number =");
    scanf("%f",&number1);
    printf("enter operator(+,-,*,/) = ");
    scanf(" %c" ,&oprt);
    printf("enter 2nd Number =");
    scanf("%f" ,&number2);
    
    switch(oprt){
        case '+':
        printf("%f + %f = %f" ,number1,number2,number1 + number2);
        break;
        case '-':
        printf("%f - %f = %f",number1,number2,number1 - number2);
        break;
        case '*':
        printf("%f * %f = %f " ,number1,number2,number1 * number2);
        break;
        case '/':
        if (number2 == 0) {
                printf("Division by 0 is not defined");
            } else {
        printf("%f / %f = %f " ,number1,number2,number1 / number2);
            }
        break;
    }
    return 0;
}