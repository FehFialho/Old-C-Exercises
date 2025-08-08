// Lesson 30 - (04/30/2025)
#include <stdio.h>
#include <string.h>

int main() {
    char s1[20];
    char s2[20];

    printf("Enter the first word: ");    
    fgets(s1, sizeof(s1), stdin); 
    s1[strlen(s1) - 1] = '\0';
    
    printf("Enter the second word: ");
    fgets(s2, sizeof(s2), stdin); 
    s2[strlen(s2) - 1] = '\0';

    int res = strcmp(s1, s2);

    if (res == 0) {
        printf("The first string is equal to the second string!\n");
    } else if (res < 0) { //  String 1 comes first!
        printf("The string \"%s\" comes before \"%s\" alphabetically!\n", s1, s2);
    } else { //  String 1 comes after!
        printf("The string \"%s\" comes after \"%s\" alphabetically!\n", s1, s2);
    }

    return 0;
}
