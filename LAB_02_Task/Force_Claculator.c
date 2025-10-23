
     //   FORCE    CALCULATOR    //  

#include<stdio.h>
int main(){
    float  Mass , Acceleration;
    printf("Enter Mass (in kg)= ");
    scanf("%f" ,&Mass);

    printf("Enter Acceleration (in m/s^2) =");
    scanf("%f" , &Acceleration);
    
    printf("Force is : %f" ,  Mass * Acceleration );
     
    return 0;
}