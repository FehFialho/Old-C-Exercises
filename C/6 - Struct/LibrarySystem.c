// Lesson 34 - (05/13/2025)
// This program manages a simple book catalog for a library, allowing the user
// to register new books with details such as title, author, genre, release year,
// number of pages, and price. It also provides the ability to list all registered books.
// The program uses a menu-based interface for user interaction.

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define MAX 50

struct book_register {
    char title[30];
    char author[20];
    char genre[10];
    int release_year;
    int pages;
    float price;
};

void menu();
void register_new_book(struct book_register book[], int *n);
void list_books(struct book_register book[], int n);

int main() {
    int option = 1, n = 0;
    struct book_register book[MAX];

    do {
        system("cls");
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                register_new_book(book, &n);
                break;
            case 2:
                list_books(book, n);
                break;
            case 3:
                printf("Exiting the system... See you later!\n");
                break;
            default:
                printf("Please enter a valid option!\n");
                Sleep(1200);
                break;
        }

    } while (option != 3);
}

void menu() {
    printf("\n====== LUZ LIBRARY ======\n");
    printf("1. Register new book\n");
    printf("2. View registered books\n");
    printf("3. Exit\n");
    printf("\nChoose an option: ");
}

void register_new_book(struct book_register book[], int *n) {
    printf("\n---- Book Registration ----\n\n");

    fflush(stdin);
    printf("Book Title: ");
    fgets(book[*n].title, sizeof(book[*n].title), stdin);
    book[*n].title[strlen(book[*n].title) - 1] = '\0';

    fflush(stdin);
    printf("Author Name: ");
    fgets(book[*n].author, sizeof(book[*n].author), stdin);
    book[*n].author[strlen(book[*n].author) - 1] = '\0';

    fflush(stdin);
    printf("Book Genre: ");
    fgets(book[*n].genre, sizeof(book[*n].genre), stdin);
    book[*n].genre[strlen(book[*n].genre) - 1] = '\0';

    printf("Number of Pages: ");
    scanf("%d", &book[*n].pages);

    printf("Release Year: ");
    scanf("%d", &book[*n].release_year);

    printf("Price: $");
    scanf("%f", &book[*n].price);

    (*n)++;
    printf("\nBook successfully added!\n");
    system("pause");
}

void list_books(struct book_register book[], int n) {
    printf("\n--- Book Catalog ---\n");

    for (int i = 0; i < n; i++) {
        printf("\n---------------------");
        printf("\n> Book %d ($%.2f)\n", i + 1, book[i].price);
        printf("%s - %s (%d)\n", book[i].title, book[i].author, book[i].release_year);
        printf("Genre: %s\n", book[i].genre);
        printf("Pages: %d\n", book[i].pages);
    }

    printf("---------------------\n");
    system("pause");
}
