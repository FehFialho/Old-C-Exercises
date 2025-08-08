// Lesson 31 - (05/05/2025)
// This program demonstrates how to use a double pointer in C.

#include <stdio.h>

int main(){
	
    int x = 40;
    int *single_ptr = &x;
    int **double_ptr = &single_ptr;
	
	printf("===== Double Pointer =====\n");
	printf("Value - %d\n", **double_ptr);
	printf("Address - %p\n", &double_ptr);
	printf("Content - %p\n", double_ptr);
	
}