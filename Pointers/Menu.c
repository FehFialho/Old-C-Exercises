// Lesson 26 - (04/23/2025)
#include <stdio.h>

int main() {
    
    int code[5];
    float price[5];

    FILE *menu;
    menu = fopen("menu.txt", "w");

    if (menu == NULL) {
        printf("Error opening the file!");
    }
    
    for (int i = 0; i < 5; i++) {
        printf("Enter the product code and its price separated by a space: ");
        scanf("%d %f", &code[i], &price[i]);
    }

    fprintf(menu, "============ MENU ============\n");
    for (int i = 0; i < 5; i++) {
        fprintf(menu, "Code %d................ %.2f\n", code[i], price[i]);
    }
    fprintf(menu, "==============================\n");

    fclose(menu);
}