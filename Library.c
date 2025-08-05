// Lesson 28 - (04/28/2025)
#include <stdio.h>
#include <string.h>
#include <unistd.h> 

void verify(FILE **lib);

int main() {
    int option = 0, stock[50];
    char title[50][50], genre[50][10], author[50][30], isbn[50][5];
    double price[50];
    int index = 0;
    
    FILE *lib = NULL;

    do {
        printf("\n========== STATIKKA BOOKSTORE ==========\n");
        printf("\n1. Register Book\n2. List Books\n3. About the Bookstore\n4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        fflush(stdin);

        switch (option) {
            case 1:
                if (index >= 50) {
                    printf("Book limit reached!\n");
                    break;
                }

                // Verify and create the file if necessary.
                verify(&lib);

                // Book registration.
                printf("\n------------------------------\n");

                printf("Enter the book ISBN: ");
                fflush(stdin);
                fgets(isbn[index], sizeof(isbn[index]), stdin);
                isbn[index][strlen(isbn[index]) - 1] = '\0';

                printf("Enter the book title: ");
                fgets(title[index], sizeof(title[index]), stdin);
                title[index][strlen(title[index]) - 1] = '\0';

                printf("Enter the book genre: ");
                fgets(genre[index], sizeof(genre[index]), stdin);
                genre[index][strlen(genre[index]) - 1] = '\0';

                printf("Enter the author's name: ");
                fgets(author[index], sizeof(author[index]), stdin);
                author[index][strlen(author[index]) - 1] = '\0';

                printf("Enter the book price and available quantity: $");
                scanf("%lf %d", &price[index], &stock[index]);
                fflush(stdin);

                lib = fopen("Book Registry.txt", "a");  // Reopen file in append mode.
                if (lib != NULL) {
                    fprintf(lib, "| %-5s | %-30s | %-10s | %-20s | $%-8.2lf | %-3d\n", isbn[index], title[index], genre[index], author[index], price[index], stock[index]);
                    fclose(lib);
                    printf("Book successfully registered!\n");
                } else {
                    printf("Error opening the file to add the book!\n");
                }

                index++;
                break;

            case 2:
                verify(&lib);
                printf("\n===== REGISTERED BOOKS =====\n");

                if (index < 1) {
                    printf("\nNo books registered!\n");
                    break;
                }

                for (int i = 0; i < index; i++) {
                    printf("\n%d. %s (%s) - %s\nPrice: $%.2lf\nISBN: %s\nQuantity: %d\n", i + 1, title[i], genre[i], author[i], price[i], isbn[i], stock[i]);
                }
                break;

            case 3:
                printf("\n============ ABOUT US ==================\n");
                printf("Our library project started in 2025 (30 years ago) thanks to an activity by Cesar Stati!\n");
                printf("Our mission is to make books accessible to people of all ages and tastes. We accept your old books!\n");
                printf("\nOur website: papertoilet.com\n");
                printf("We are currently located in Barreirinha.\n");
                printf("Fried Garnize Street Nº666 - Barreirinha\n");
                break;

            case 4:
                printf("\nThank you for using our library. See you soon!\n");
                break;

            default:
                printf("Please choose a valid option!\n");
        }

    } while (option != 4);

    return 0;
}

void verify(FILE **lib) {
    *lib = fopen("Book Registry.txt", "r");

    if (*lib == NULL) {
        *lib = fopen("Book Registry.txt", "w");  
        if (*lib != NULL) {
            fprintf(*lib, "\n=========================== STATIKKA BOOKSTORE ===========================\n");
            fprintf(*lib, "| CODE  | TITLE                          | GENRE      | AUTHOR              | PRICE    | QTY |\n");
            fprintf(*lib, "=========================================================================\n");
            fclose(*lib);
            printf("File not found! Creating new file...\n");
            sleep(2);  
            printf("File created successfully!\n");
        } else {
            printf("Error creating the file!\n");
            sleep(1);  
        }
    } else {
        fclose(*lib);
    }
}
