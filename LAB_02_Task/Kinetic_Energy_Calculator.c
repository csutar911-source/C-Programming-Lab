  
  //    KINETIC   ENERGY   CALCULATOR    //

#include<stdio.h>
int main(){
    float Mass , Velocity ;
    printf("Enter Mass =");
    scanf("%f" , &Mass);
    
    printf("Enter Velocity =");
    scanf("%f" , &Velocity);

    printf("Kinetic_Energy is :%f" , 0.5 * Mass * Velocity * Velocity ); 

    return 0;
}

