// Lesson 31 - (05/05/2025)
// This program demonstrates how to modify a variable's value using a pointer.

#include <stdio.h>

int main(){
	
	int *ptr, num = 10;
	ptr = &num;
	
	printf("Before - %d\n", num);
	*ptr = 25;
	printf("After - %d\n", num);
	
}
