#include<stdio.h>
int main(){
    float ts1 , ts2;
    printf("Enter tensile strength of 1st material (in MPa) = ");
    scanf("%f" , &ts1);
    printf("Enter tensile strength of 2nd material (in MPa) = ");
    scanf("%f" , &ts2);
    if (ts1 > ts2) {
         printf("Material 1 has large : %f  MPa" , ts1);
   } else if (ts1 < ts2){
     printf("Material 2 has large:  %f  MPa" , ts2); 
  
   } 
    return 0;
} 