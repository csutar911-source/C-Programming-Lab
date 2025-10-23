#include<stdio.h>
int main(){
    int units;
    float bill;
    
    // Putting Consumed Units 
    printf("Enter units consumed :");
    scanf("%d" ,&units);

    // Calculating bill based on total consumed units
    if (units <= 100) {
        bill = units * 1.5;
    }
    /*
    for example we used 150 units 
    firstly we will get 100 x 1.5 = 150Rs.
    now 150-100 = 50 which cost x2 each so = 100Rs.
    total = 150 + 100 = 250
    */ 
    else if (units <= 200) {
        bill = (100 * 1.5) + (units - 100)*2;
    }
    else if (units <= 300) {
        bill = (100 * 1.5) + (100 * 2) + (units - 200)*3;
    }
    else {
        bill = (100 * 1.5) + (100 * 2) + (100 * 3) + (units - 300)*5;
    }
    // FINAL BILL
    printf("Total bill = %f\n" , bill);
    return 0;
}