#include <stdio.h>

int main(){

    int basis;

    printf("Enter the base value: ");
    scanf("%d", &basis);

    printf("\n 1 - Right Triangle\n\n");

    for (int line = 0; line <= basis; line++){
        for (int symbol = 1; symbol <= line; symbol++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n 2 - Inverted Right Triangle\n\n");

    for (int line = basis; line >= 0; line--){
        for (int symbol = 1; symbol <= line; symbol++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n 3 - Pyramid\n\n");

    for (int line = 0; line <= basis - 1; line++){

        for (int space = basis; space >= line; space--){
            printf(" ");
        }

        for (int symbol = 0; symbol <= line; symbol++){
            printf("*");
        }

        for (int symbol = 1; symbol <= line; symbol++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
