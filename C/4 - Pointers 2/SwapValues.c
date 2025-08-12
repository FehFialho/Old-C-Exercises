// Lesson 31 - (05/05/2025)
#include <stdio.h>

void swap(int *a, int *b);

int main(){
	
	int x = 10, y = 20;
	
	printf("Before - x = %d | y = %d\n", x, y);
	swap(&x, &y);
	printf("After - x = %d | y = %d\n", x, y);
	
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}