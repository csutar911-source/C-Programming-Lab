#include<stdio.h>
int main(){
    float stress , strength , fos;
    printf("Enter applied stress (MPa) =");
    scanf("%f" ,&stress);

    printf("Enter material yield strength (MPa) =");
    scanf("%f" ,&strength);
    printf("Factor of Safety = %f\n" ,fos = strength / stress);
    if (fos >= 2.0) {
        printf("Safe Design");
    }
    else if (fos >= 1.5 && fos < 2.0) {
        printf("Acceptable with monitoring");
    }
    else {
        printf("Danger - redesign needed ");
    }
    return 0;
}