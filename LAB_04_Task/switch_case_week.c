#include <stdio.h>

int main() {

    int number;
    printf("Enter the number of odd days (0-6): ");
    scanf("%d", &number);

    switch(number) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
