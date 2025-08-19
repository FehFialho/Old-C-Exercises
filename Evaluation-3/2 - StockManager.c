/*  Evaluation 2 - (05/28/2025)
    Implements a simple Inventory Control system that allows product registration with validation, sales processing, stock updating, and product listing with "ESGOTADO" status.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#define MAX 10

struct product_register {
    int id, stock;
    char name[30];
    float price;
};

void menu();
void add_product(struct product_register product[], int *n, int tot);
void make_sale(struct product_register product[], int n);
void list_products(struct product_register product[], int n);

int main() {
    
    int option = 1, n = 0;
    struct product_register product[MAX];
    
    do {
        system("cls");
        menu();
        scanf("%d", &option);
        int tot = n;
        
        switch(option) {
            case 1:
                add_product(product, &n, tot);
            break;
            case 2:
                make_sale(product, n);
            break;
            case 3:
                list_products(product, n);
            break;
            case 4:
                printf("Exiting program...\n");
            break;
            default:
                printf("Please enter a valid value!\n");
                Sleep(1300);
            break;
        }
        
    } while(option != 4);
}

void menu() {
    printf("\n====== INVENTORY ======\n");
    printf("1. Add Product\n");
    printf("2. Make Sale\n");
    printf("3. List Products\n");
    printf("4. Exit\n");
    printf("\nEnter your choice: ");
}

void add_product(struct product_register product[], int *n, int tot) {
    
    int new_id;
    bool unique = true;
    
    printf("\n---- New Product ----\n\n");
    
    printf("Enter Product ID: ");
    scanf("%d", &new_id);
    
    for (int i = 0; i < tot; i++) {
        if (new_id == product[i].id) {
            unique = false;
            break;
        }
    }
    
    while(!unique) {
        printf("This ID is already registered! Enter a new one: ");
        scanf("%d", &new_id);
        
        unique = true;
        for (int i = 0; i < tot; i++) {
            if (product[i].id == new_id) {
                unique = false;
                break;
            }
        }
    }
    
    product[*n].id = new_id;
    
    fflush(stdin);
    printf("Name: ");
    fgets(product[*n].name, sizeof(product[*n].name), stdin);
    product[*n].name[strlen(product[*n].name) - 1] = '\0';
    
    printf("Stock Quantity: ");
    scanf("%d", &product[*n].stock);
    while (product[*n].stock <= 0) {
        printf("Must be greater than 0! ");    
        scanf("%d", &product[*n].stock);
    }
    
    printf("Price: $");
    scanf("%f", &product[*n].price);
    while (product[*n].price <= 0) {
        printf("Price must be greater than 0!: $");    
        scanf("%f", &product[*n].price);
    }
    
    (*n)++;
    printf("\nProduct successfully added!\n");
    system("pause");    
}

void make_sale(struct product_register product[], int n) {
    
    int search, amount;
    printf("Enter the Product ID to sell: ");
    scanf("%d", &search);
    
    for (int i = 0; i < n; i++) {
        
        if (product[i].id == search) {
            printf("Product found! Enter quantity to sell: ");
            scanf("%d", &amount);
            
            if (product[i].stock >= amount) {
                float final_price = product[i].price * amount;
                product[i].stock -= amount;
                printf("Sale completed successfully! Total: $%.2f", final_price);
                printf("\n---------------------\n");
                system("pause");
                return;
            }
            
            printf("Not enough stock available!");
            printf("\n---------------------\n");
            system("pause");
            return;    
        }    
    }
    
    printf("[Error] Product not found!");
    printf("\n---------------------\n");
    system("pause");
}

void list_products(struct product_register product[], int n) {
    
    printf("\n--- Our Products ---\n");
    
    for (int i = 0; i < n; i++) {
        printf("\n---------------------");
        if (product[i].stock == 0) {
            printf("\n> Product ID-%d - SOLD OUT\n", product[i].id);
        } else {
            printf("\n> Product ID-%d - x%d\n", product[i].id, product[i].stock);
        }
        printf("Price: $%.2f", product[i].price);
    }
    
    printf("\n---------------------\n");
    system("pause");
}
