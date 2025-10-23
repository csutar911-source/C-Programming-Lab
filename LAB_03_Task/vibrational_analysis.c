#include<stdio.h>
int main(){
    float amplitude , frequency;
    printf("Enter vibration amplitude (in mm) = ");
    scanf("%f" ,&amplitude);

    printf("Enter vibration frequency (in Hz) =");
    scanf("%f" ,&frequency);

    if (amplitude > 0.5 && (frequency >=20 && frequency <=50)) {
        printf("Risk : High Risk\n");
    }
    else if (amplitude > 0.5 || frequency > 60) {
        printf("Risk : Medium Risk");
    }
    else {
        printf("Risk : Low Risk");
    }
    return 0;
}