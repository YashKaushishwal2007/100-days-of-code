#include <stdio.h>

int main() {
    double costPrice, sellingPrice;

    
    printf("Enter the cost price: ");
    scanf("%lf", &costPrice);

    
    printf("Enter the selling price: ");
    scanf("%lf", &sellingPrice);

    
    if (costPrice <= 0) {
        printf("Error: Cost price must be greater than zero.\n");
        return 1; 
    }

    if (sellingPrice > costPrice) {
        
        double profit = sellingPrice - costPrice;
        double profitPercentage = (profit / costPrice) * 100;
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    } else if (costPrice > sellingPrice) {
        
        double loss = costPrice - sellingPrice;
        double lossPercentage = (loss / costPrice) * 100;
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        
        printf("No profit, no loss.\n");
    }

    return 0;
}