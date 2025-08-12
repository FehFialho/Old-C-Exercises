// Lesson 33 - (05/07/2025)
// This program manages seat reservations and cancellations in a cinema.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include "cine_functions.h"

int main(){
	
	char cineMatrix[rowNum][seatNum];
	createMatrix(cineMatrix); // Initialize all seats
	int option = 1, row, seat;
	
	while(option != 0){
		
		option = menu();
	
		switch(option){
			case 1:
				system("cls");
				printMatrix(cineMatrix);
				break;
			
			case 2: 
			{
				row = 0;
				seat = 0;
				
				bool correctRow = (row >= 1) && (row <= rowNum);
			    bool correctSeat = (seat >= 1) && (seat <= seatNum);
			    
			    while (!correctRow || !correctSeat) {
			        system("cls");
			        printf("====== Seat Selection =======\n\n");
			        printf("Enter desired row (1-%d) and seat (1-%d): ", rowNum, seatNum);
			        scanf("%d %d", &row, &seat);
			
			        correctRow = (row >= 1) && (row <= rowNum);
			        correctSeat = (seat >= 1) && (seat <= seatNum);
			        if (!correctRow || !correctSeat){
			        	changeColor(2); // Red.
			        	printf("\nPlease enter valid values!!!");
			        	changeColor(1); // Default.
			        	Sleep(1500);
					}
			    }
			    
			    verifySeat(cineMatrix, row, seat);
			    break;
			}
			
			case 3:
			{
				row = 0;
				seat = 0;
				
				bool correctRow = (row >= 1) && (row <= rowNum);
			    bool correctSeat = (seat >= 1) && (seat <= seatNum);
			    
			    while (!correctRow || !correctSeat) {
			        system("cls");
			        printf("====== Seat Selection =======\n\n");
			        printf("Enter desired row (1-%d) and seat (1-%d): ", rowNum, seatNum);
			        scanf("%d %d", &row, &seat);
			
			        correctRow = (row >= 1) && (row <= rowNum);
			        correctSeat = (seat >= 1) && (seat <= seatNum);
			        if (!correctRow || !correctSeat){
			        	changeColor(2); // Red.
			        	printf("\nPlease enter valid values!!!");
			        	changeColor(3); // White.
			        	Sleep(1500);
					}
			    }
			    
			    removeSeat(cineMatrix, row, seat);
			    break;
			}
				
			case 0:
				system("cls");
				printf("\n-------------------------------------------\n");
				changeColor(1);
				printf("Thank you for using our program! See you soon!\n");
				changeColor(3);
				printf("-------------------------------------------\n");
				break;
			
			default:
				system("cls");
				printf("Please make a valid choice!\n");
				break;
		}
	}
	
}
