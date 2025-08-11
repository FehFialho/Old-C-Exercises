// Lesson 34 - (05/13/2025)
// This program manages a simple product inventory, allowing adding,
// updating stock, and listing registered products.

#include <stdio.h>
#include <string.h>

struct product_register {
    char name[50];
    char id[20];
    int stock;
    float price;
};

void menu();
void addProduct(struct product_register product[], int *n);
void updateStock(struct product_register product[], int n);
void listProducts(struct product_register product[], int n);

int main() {
    
    int x;
    printf("Enter the desired inventory size: ");
    scanf("%d", &x);
    
    struct product_register product[x];
    int n = 0; // Number of registered products
    int option;

    do {
        menu();
        scanf("%d", &option);
        fflush(stdin);

        switch (option) {
            case 1:
                addProduct(product, &n);
                break;
            case 2:
                updateStock(product, n);
                break;
            case 3:
                listProducts(product, n);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option!\n");
        }

    } while (option != 4);

    return 0;
}

void menu(){
    printf("\n==== INVENTORY MENU ====\n");
    printf("1. Add new product\n");
    printf("2. Update product stock\n");
    printf("3. List products\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

void addProduct(struct product_register product[], int *n) {

    printf("\nRegistering product %d:\n", *n + 1);
    printf("Name: ");
    fgets(product[*n].name, sizeof(product[*n].name), stdin);
    product[*n].name[strlen(product[*n].name)  -1] = '\0';

    printf("Code (ID): ");
    fgets(product[*n].id, sizeof(product[*n].id), stdin);
    product[*n].id[strlen(product[*n].id)  -1] = '\0';
    
    printf("Stock quantity: ");
    scanf("%d", &product[*n].stock);

    printf("Unit price: $");
    scanf("%f", &product[*n].price);
    fflush(stdin);

    (*n)++; // Updates the counter globally
    printf("Product successfully added!\n");
}


void updateStock(struct product_register product[], int n) {
    
    char id[20];
    int quantity;

    if (n == 0) {
        printf("No products registered.\n");
        return;
    }

    printf("Enter the product code to update: ");
    fgets(id, sizeof(id), stdin);
    id[strlen(id) -1] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(product[i].id, id) == 0) {
            printf("Product found: %s\n", product[i].name);
            printf("Current quantity: %d\n", product[i].stock);
            printf("New quantity: ");
            scanf("%d", &quantity);
            product[i].stock = quantity;
            printf("Stock updated!\n");
            fflush(stdin);
            return;
        }
    }

    printf("Product not found.\n");
}

void listProducts(struct product_register product[], int n) {
    if (n == 0) {
        printf("No products registered.\n");
        return;
    }

    printf("\n--- Product List ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("Name: %s\n", product[i].name);
        printf("ID Code: %s\n", product[i].id);
        printf("Stock quantity: %d\n", product[i].stock);
        printf("Unit price: $ %.2f\n", product[i].price);
    }
}
