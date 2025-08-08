// Lesson 31 - (05/05/2025)
// This program iterates through an array using a pointer, printing each value and its address.

#include <stdio.h>

int main(){
	
    int *pointer, vet[5] = {5, 3, 2, 1, 4};
	
	for (int i = 0; i < 5; i++){
		pointer = &vet[i];
		printf("|%d) ", i + 1);
		printf("Value - %d | ", *pointer);
		printf("Address - %p\n", pointer);
	}
	
}
