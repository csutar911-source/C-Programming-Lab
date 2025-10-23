#include<stdio.h>
int main(){
    float Number;
    // WRITING A DESIRED NUMBER
    printf("Enter a number : ");
    scanf("%f" ,&Number);

    // NOW WE WILL CHECK CONDITIONS
    if (Number > 0) {
        printf("The number is Positive\n");
    }
    else if (Number < 0) {
        printf("The number is Negative\n");
    }
    else {
        printf("The number is Zero\n");
    }
    return 0;
}