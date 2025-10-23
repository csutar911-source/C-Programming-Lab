#include<stdio.h>
int main(){
    float temperature ;
    printf("Enter temperature in(C) =");
    scanf("%f" ,&temperature);
    if (temperature >60 && temperature <=80) {
        printf("temperature is Safe: %f" , temperature);
    } else  { 
        printf("WARNING %f" , temperature);
       }
    return 0;
}