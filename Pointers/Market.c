// Lesson 27 - (04/24/2025)
#include <stdio.h>
#include <string.h>

int main() {
    
    char name[5][30];
    double price[5];
    int amount[5];
    double total = 0;
    
    FILE *market;    
    market = fopen("market.txt", "w");
    
    printf("\n========= MINI MARKET =============\n");
    
    for (int i = 0; i < 2; i++) {
        
        printf("\n-------------------------\n");
        fflush(stdin);
        printf("Enter the name of product %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';  // Remove newline character
        
        printf("Enter price and quantity: ");
        scanf("%lf %d", &price[i], &amount[i]);
        printf("Product total: $%.2lf", price[i] * amount[i]);
        total += price[i] * amount[i];
        fprintf(market, "\n%sQty..........(x%i) - $%.2lf\n", name[i], amount[i], price[i] * amount[i]);
    }

    printf("\n\n--------------------------------\n      Check the .txt file!");
    fprintf(market, "\nThe total bill is $%.2lf!", total);
    fclose(market);
}
