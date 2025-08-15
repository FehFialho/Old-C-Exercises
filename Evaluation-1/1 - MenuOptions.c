/*
1) Create a program that displays a menu with several numbered options. 
The user must enter the number corresponding to the desired option. 
The program will use a switch statement to execute the action associated 
with the chosen option. The do...while loop will ensure that the menu is 
repeatedly displayed and that the program continues running until the user 
chooses the exit option.

Menu Options:
1. Display a Greeting Message
2. Check if a Number is Even or Odd
3. Convert Temperature from Celsius to Fahrenheit  //(F = C * 9/5 + 32)
4. Exit the Program
*/
#include <stdio.h>
#include <string.h>

void menu();

int main(){

    int choice = 1, num;
    float fah, cel;
    char name[50];

    do {
        menu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter your name: ");
                scanf("%s", &name);
                printf("Hello! Welcome %s!\n", name);
            break;
            case 2:
                printf("\nEnter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0){
                    printf("The number %d is even!\n", num);
                } else {
                    printf("The number %d is odd!\n", num);
                }
            break;
            case 3:
                printf("\nEnter the value in Celsius: ");
                scanf("%f", &cel);
                fah = (cel * 9/5) + 32;
                printf("%.2f °C --> %.2f °F!\n", cel, fah);
            break;
            case 4:
                printf("\nGoodbye!\n");
            break;
            default:
                printf("\nPlease choose a valid option!\n");
            break;
        }

    } while (choice != 4);
}

void menu(){
    printf("\n======== MENU =========\n");
    printf("1. Greeting\n");
    printf("2. Even or Odd Number\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Exit Program\nChoose: ");
}
