#include <stdio.h>

int main() {
    int units;
    float bill = 0.0, extraCharge = 50.0;

    // Step 1: Ask user to enter units
    printf("Enter total units consumed: ");
    
    // Step 2: Take input using scanf
    scanf("%d", &units);

    // Step 3–6: Else-if ladder for slab calculation
    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) + (units - 100) * 2.50;
    }
    else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.50) + (units - 200) * 4.00;
    }
    else {
        bill = (100 * 1.50) + (100 * 2.50) + (100 * 4.00) + (units - 300) * 5.00;
    }

    // Step 8: Add extra charges
    bill = bill + extraCharge;

    // Step 9 & 10: Store and print final bill
    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}