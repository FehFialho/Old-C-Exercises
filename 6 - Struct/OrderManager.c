// Lesson 34 - (05/13/2025)
// This program manages production orders, allowing the user to create new orders,
// list all orders, and filter orders by their status. Each order includes an ID,
// stock quantity, status, and description. The program uses a simple menu-based
// interface for interaction.

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // system("cls")
#include <windows.h> // Sleep

#define MAX 50

struct production_order {
    int id;
    int stock;
    char status[15];
    char description[100];
};

void menu();
void create_new_order(struct production_order order[], int *n);
void list_orders(struct production_order order[], int n);
void print_order_by_status(struct production_order order[], int n);

int main() {
    int option = 0, n = 0;
    struct production_order order[MAX];

    do {
        system("cls");
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                create_new_order(order, &n);
                break;
            case 2:
                list_orders(order, n);
                break;
            case 3:
                print_order_by_status(order, n);
                break;
            case 4:
                printf("Closing program... Goodbye!\n");
                break;
            default:
                printf("Please enter a valid option!\n");
                Sleep(1200);
                break;
        }
    } while (option != 4);
}

void menu() {
    printf("\n======= PRODUCTION ORDERS =======\n");
    printf("1. Add new production order\n");
    printf("2. List all production orders\n");
    printf("3. Show orders by status\n");
    printf("4. Exit\n");
    printf("\nChoose an option: ");
}

void create_new_order(struct production_order order[], int *n) {
    int x;

    fflush(stdin);
    printf("Enter Order Number (ID): ");
    scanf("%d", &order[*n].id);

    printf("Enter available stock quantity: ");
    scanf("%d", &order[*n].stock);

    printf("1 - Pending | 2 - In Production | 3 - Completed\nEnter order status: ");
    scanf("%d", &x);

    if (x == 1) {
        strcpy(order[*n].status, "Pending");
    } else if (x == 2) {
        strcpy(order[*n].status, "In Production");
    } else if (x == 3) {
        strcpy(order[*n].status, "Completed");
    }

    fflush(stdin);

    printf("Enter order description: ");
    fgets(order[*n].description, sizeof(order[*n].description), stdin);
    fflush(stdin);
    order[*n].description[strlen(order[*n].description) - 1] = '\0';

    (*n)++;
    printf("\nOrder successfully added!\n");
    system("pause");
}

void list_orders(struct production_order order[], int n) {
    printf("\n---- Order List ----\n");

    for (int i = 0; i < n; i++) {
        printf("\n> ID Code - %d\n", order[i].id);
        printf("Stock - %d\n", order[i].stock);
        printf("Status - %s\n", order[i].status);
        printf("Description - %s\n", order[i].description);
    }

    printf("\n");
    system("pause");
}

void print_order_by_status(struct production_order order[], int n) {
    int x;
    char filter[15];
    printf("1 - Pending | 2 - In Production | 3 - Completed\nEnter desired filter: ");
    scanf("%d", &x);
    fflush(stdin);

    if (x == 1) {
        strcpy(filter, "Pending");
    } else if (x == 2) {
        strcpy(filter, "In Production");
    } else if (x == 3) {
        strcpy(filter, "Completed");
    }

    fflush(stdin);
    printf("\n---- Filtered Orders (%s) ----\n", filter);

    for (int i = 0; i < n; i++) {
        if (strcmp(filter, order[i].status) == 0) {
            printf("\n> ID Code - %d\n", order[i].id);
            printf("Stock - %d\n", order[i].stock);
            printf("Description - %s\n", order[i].description);
        }
    }

    printf("\n");
    system("pause");
}
