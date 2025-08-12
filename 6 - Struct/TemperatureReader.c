// Lesson 34 - (05/13/2025)
// This program records temperature readings from different machines,
// displays all registered readings, finds the highest and lowest temperature,
// and calculates the average temperature.

#include <stdio.h>
#include <string.h>

#define MAX 50

struct temperature_reading {
    char id[10];
    char read_time[7]; // 00:00
    float celsius;
};

void menu();
void new_register(struct temperature_reading temp[], int *n);
void register_list(struct temperature_reading temp[], int n);
void print_min_max(struct temperature_reading temp[], int n);
void print_mean_temp(struct temperature_reading temp[], int n);

int main() {
    int option, n = 0;
    struct temperature_reading temp[MAX];

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                new_register(temp, &n);
                break;
            case 2:
                register_list(temp, n);
                break;
            case 3:
                print_min_max(temp, n);
                break;
            case 4:
                print_mean_temp(temp, n);
                break;
            case 5:
                printf("Goodbye!");
                break;
            default:
                printf("Please choose a valid option!");
                break;
        }

    } while (option != 5);
}

void menu() {
    printf("\n====== TEMPERATURE READING MANAGER ======\n");
    printf("1. Register new reading\n");
    printf("2. Show all readings\n");
    printf("3. Find highest and lowest temperature\n");
    printf("4. Calculate average temperature\n");
    printf("5. Exit\n");
    printf("\nChoose an option: ");
}

void new_register(struct temperature_reading temp[], int *n) {
    fflush(stdin);
    printf("\nRegister Number %d:\n", *n + 1);
    printf("Machine ID: ");
    fgets(temp[*n].id, sizeof(temp[*n].id), stdin);
    temp[*n].id[strlen(temp[*n].id) - 1] = '\0';

    fflush(stdin);
    printf("Reading Time (HH:MM): ");
    fgets(temp[*n].read_time, sizeof(temp[*n].read_time), stdin);
    temp[*n].read_time[strlen(temp[*n].read_time) - 1] = '\0';

    fflush(stdin);
    printf("Temperature in °C: ");
    scanf("%f", &temp[*n].celsius);

    (*n)++;
    printf("Reading successfully added!\n");
}

void register_list(struct temperature_reading temp[], int n) {
    if (n == 0) {
        printf("No temperature records available!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nReading %d:\n", i + 1);
        printf("Machine ID: %s\n", temp[i].id);
        printf("Reading Time: %s\n", temp[i].read_time);
        printf("Temperature: %.2f°C\n", temp[i].celsius);
    }
}

void print_min_max(struct temperature_reading temp[], int n) {
    if (n == 0) {
        printf("No temperature records available!\n");
        return;
    }

    float min = temp[0].celsius;
    int min_i = 0;
    float max = temp[0].celsius;
    int max_i = 0;

    printf("\n ----- MIN AND MAX ------\n\n");

    for (int i = 0; i < n; i++) {
        if (temp[i].celsius > max) {
            max = temp[i].celsius;
            max_i = i;
        }

        if (temp[i].celsius < min) {
            min = temp[i].celsius;
            min_i = i;
        }
    }

    printf("Highest temperature: %.1f°C (Machine ID %s)\n", max, temp[max_i].id);
    printf("Lowest temperature: %.1f°C (Machine ID %s)\n", min, temp[min_i].id);
}

void print_mean_temp(struct temperature_reading temp[], int n) {
    if (n == 0) {
        printf("No records for calculation!\n");
        return;
    }

    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += temp[i].celsius;
    }

    sum /= n;
    printf("The average temperature is %.1f°C!\n", sum);
}
