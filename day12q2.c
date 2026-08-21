//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>

int main() {
    int units, bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units > 0) {
        if (units <= 100) {
            bill += units * 5;
        } else {
            bill += 100 * 5;
        }
    }

    if (units > 100) {
        if (units <= 200) {
            bill += (units - 100) * 7;
        } else {
            bill += 100 * 7;
        }
    }

    if (units > 200) {
        if (units <= 300) {
            bill += (units - 200) * 10;
        } else {
            bill += 100 * 10;
        }
    }

    if (units > 300) {
        bill += (units - 300) * 12;
    }

    printf("Total Bill: %d\n", bill);
    return 0;
}