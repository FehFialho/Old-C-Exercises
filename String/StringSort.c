// Lesson 30 - (04/30/2025)
#include <stdio.h>
#include <string.h>

int main(){
    
    char movies[7][30] = {"The Godfather", "Casablanca", "Gone with the Wind", "Fight Club", "Taxi Driver", "Forrest Gump", "City of God"};

    for(int i = 0; i < 7; i++){
        for (int j = 0; j < 6; j++){
            int res = strcmp(movies[j], movies[j + 1]);
            if (res > 0){
                char aux[30];
                strcpy(aux, movies[j]);
                strcpy(movies[j], movies[j + 1]); 
                strcpy(movies[j + 1], aux);
            }
        }
    }
    
    for (int i = 0; i < 7; i++){
        printf("%s\n", movies[i]);
    }
}
