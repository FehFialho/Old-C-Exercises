// Lesson 30 - (04/30/2025)
#include <stdio.h>
#include <string.h>

int main() {

    char password[20] = "admin";
    char passGuess[20];
    
    printf("Hello! Enter your password to continue: ");
    fgets(passGuess, sizeof(passGuess), stdin); 
    passGuess[strlen(passGuess) - 1] = '\0';
    
    int res = strcmp(password, passGuess);
    
    if (res == 0){
        printf("Correct password. Access granted!");
    } else {
        printf("Incorrect password. Access denied!");
    }

}
