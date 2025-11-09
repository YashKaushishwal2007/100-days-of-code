#include <stdio.h>

int main() {
    int lateDays;
    int totalFine = 0;

    
    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {

        printf("No fine. Thank you for returning the book on time.\n");

    } else if (lateDays <= 5) {
        
        
        totalFine = lateDays * 2;
        printf("Total fine: ₹%d\n", totalFine);

    } else if (lateDays <= 10)
        
        
        totalFine = 5 * 2; 
        
        
        totalFine += (lateDays - 5) * 4;
        
        printf("Total fine: ₹%d\n", totalFine);

    } else if (lateDays <= 30) {
    
        totalFine = 5 * 2;
        
        
        totalFine += 5 * 4;
        
        
        totalFine += (lateDays - 10) * 6;

        printf("Total fine: ₹%d\n", totalFine);

    } else {
        
        printf("Your membership has been cancelled.\n");
    }

    return 0;
}