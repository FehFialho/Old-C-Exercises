// Lesson 31 - (05/05/2025)
// This program compares two pointers and displays their values, addresses, and contents.

#include <stdio.h>

int main(){
	
    int v1 = 5, v2 = 15;
    int *ptr_1 = &v1, *ptr_2 = &v2;
    
    if (ptr_1 == ptr_2){
    	printf("The addresses are the same!\n");
	} else {
		printf("The addresses are different!\n");
	}
    
	printf("\n======== Value 1 ========\n");
	printf("Value - %d\n", *ptr_1);
	printf("Address - %p\n", &ptr_1);
	printf("Content - %p\n", ptr_1);
	
	printf("\n======== Value 2 ========\n");
	printf("Value - %d\n", *ptr_2);
	printf("Address - %p\n", &ptr_2);
	printf("Content - %p\n", ptr_2);
	
}
