// Lesson 26 - (04/23/2025)
#include <stdio.h>

int main() {
    char name[10];
    int code;

    FILE *guestList;
    guestList = fopen("guests.txt", "w");

    if (guestList == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter the guest's code: ");
    scanf("%d", &code);
    
    getchar();

    printf("Enter the guest's name: ");
    fgets(name, sizeof(name), stdin);

    fprintf(guestList, "%d - %s", code, name);
    fclose(guestList);

    printf("Check your folder!");
    return 0;
}