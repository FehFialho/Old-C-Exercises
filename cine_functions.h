#ifndef CINE_FUNCTIONS_H
#define CINE_FUNCTIONS_H

#include <stdio.h>
#include <windows.h>

#define rowNum 8
#define seatNum 5

int menu();
void changeColor(int color);

void createMatrix(char matrix[rowNum][seatNum]); // Initialize all seats
void printMatrix(char matrix[rowNum][seatNum]);

void verifySeat(char matrix[rowNum][seatNum], int row, int seat); // Check if seat is taken; if not, reserve it
void removeSeat(char matrix[rowNum][seatNum], int row, int seat); // Check if seat is free; if not, free it


int menu() {
	int option;
	printf("\n===== Cinema Seating =====\n");
	printf("1 - Show Seat Map\n");
	printf("2 - Reserve Seat\n");
	printf("3 - Cancel Reservation\n");
	printf("0 - Exit\n\n");
	printf("Choose an option: ");
	scanf("%d", &option);
	return option;
}

void changeColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (color == 1)
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Green
	else if (color == 2)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);   // Red
	else
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // White (default)
}

void createMatrix(char matrix[rowNum][seatNum]) {
	for (int r = 0; r < rowNum; r++) {
		for (int s = 0; s < seatNum; s++) {
			matrix[r][s] = 'O';  // 'O' means seat is free
		}
	}
}

void printMatrix(char matrix[rowNum][seatNum]) {
	printf("==== Seat Map ====\n\n");
	
	// Dynamic seat numbering
	printf("   ");
	for (int i = 1; i <= seatNum; i++){
		printf("%d ", i);
	}
	
	// Separator line
	printf("\n--");
	for (int i = 1; i <= seatNum; i++){
		printf("--");
	}
	printf("\n");
	
	for (int r = 0; r < rowNum; r++) {
		printf("%d| ", r + 1);
		for (int s = 0; s < seatNum; s++) {
			if (matrix[r][s] == 'o') { // lowercase 'o' means occupied
				changeColor(2); // Red
				printf("%c ", matrix[r][s]);
				changeColor(3); // Reset color (white)
			} else {
				changeColor(1); // Green
				printf("%c ", matrix[r][s]);
				changeColor(3);
			}
		}
		printf("\n");
	}
	
	// Separator line
	printf("--");
	for (int i = 1; i <= seatNum; i++){
		printf("--");
	}
	printf("\n");
}

void verifySeat(char matrix[rowNum][seatNum], int row, int seat) {
	if (matrix[row - 1][seat - 1] == 'o') {
		changeColor(2);
		printf("Seat Occupied!\n");
		changeColor(3);
		Sleep(1000);
	} else {
		matrix[row - 1][seat - 1] = 'o';
		changeColor(1);
		printf("Seat successfully reserved!\n");
		changeColor(3);
		Sleep(1000);
	}
}

void removeSeat(char matrix[rowNum][seatNum], int row, int seat) {
	if (matrix[row - 1][seat - 1] == 'O') {
		changeColor(2);
		printf("Seat is already free!\n");
		changeColor(3);
		Sleep(1000);
	} else {
		matrix[row - 1][seat - 1] = 'O';
		changeColor(1);
		printf("Seat successfully freed!\n");
		changeColor(3);
		Sleep(1000);
	}
}

#endif
