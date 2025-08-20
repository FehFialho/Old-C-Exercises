/*  Evaluation 3 - (05/28/2025)
    Implements a simple To-Do List allowing task addition, completion, removal, and listing by priority.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#define MAX 10

struct task_register {
    int id, priority;
    char description[100];
    bool status;
};

void menu();
void add_task(struct task_register[], int *count, int tot);
void complete_task(struct task_register[], int count);
void list_tasks(struct task_register[], int count);
void remove_task(struct task_register[], int *count);
void print_by_priority(struct task_register task[], int count, int prior);

void sort(struct task_register task[], int tot) {
    for (int i = 0; i < tot; i++) {
        for (int j = 0; j > tot; j++) {
            if (task[i].id > task[j].id) {
                struct task_register aux = task[j];
                task[j] = task[i];
                task[i] = aux;
            }
        }
    }
} // Bubble Sort to order by ID

int main() {
    struct task_register task[MAX];
    int option = 0, count = 0, tot;
    
    do {
        tot = count;
        system("cls");
        menu();
        scanf("%d", &option);
        sort(task, tot);
        
        switch(option) {
            case 1:
                add_task(task, &count, tot);
                break;
            case 2:
                complete_task(task, count);
                break;
            case 3:
                list_tasks(task, count);
                break;
            case 4:
                remove_task(task, &count);
                break;
            case 5:
                printf("\nExiting program.... Goodbye!\n");
                break;
            default:
                printf("Please enter a valid option!\n");
                break;
        }
        
    } while(option != 5);
    
}

void menu() {
    printf("========= TO DO LIST ===========\n");
    printf("1. Add Task\n");
    printf("2. Mark Task as Completed\n");
    printf("3. List Tasks\n");
    printf("4. Remove Task\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

void add_task(struct task_register task[], int *count, int tot) {
    
    int new_id;
    bool unique = true;
    
    printf("-------- Task Registration -------\n");
    
    printf("Task ID: ");
    scanf("%d", &new_id);
    
    for (int i = 0; i < tot; i++) {
        if (new_id == task[i].id) {
            unique = false;
            break;
        }
    }
    
    while(!unique) {
        printf("This ID is already registered! Enter a new one: ");
        scanf("%d", &new_id);
        
        unique = true;
        for (int i = 0; i < tot; i++) {
            if (task[i].id == new_id) {
                unique = false;
                break;
            }
        }
    }   
    
    task[*count].id = new_id;
    
    fflush(stdin);
    printf("Description: ");
    fgets(task[*count].description, sizeof(task[*count].description), stdin);
    task[*count].description[strlen(task[*count].description) - 1] = '\0';
    
    printf("Priority (1, 2 or 3): ");
    scanf("%d", &task[*count].priority);
    while (task[*count].priority > 3 || task[*count].priority < 1) {
        printf("Only 1, 2 or 3!: ");
        scanf("%d", &task[*count].priority);
    }
    
    task[*count].status = false;
    
    sort(task, tot);
    (*count)++;
    printf("\nTask added successfully!\n");
    system("pause");    
}

void complete_task(struct task_register task[], int count) {
    
    int search_id;
    printf("Enter the ID of the completed task: ");
    scanf("%d", &search_id);
    
    for (int i = 0; i < count; i++) {
        if (task[i].id == search_id) {
            task[i].status = true;
            printf("Task successfully completed!\n");
            printf("-----------------------------\n");
            system("pause");
            return;
        }
    }

    printf("[Error] No task found with this ID!");
    printf("\n-----------------------------\n");
    system("pause");
}

void list_tasks(struct task_register task[], int count) {
    
    printf("\n----- My To-Do List -----\n");
    
    print_by_priority(task, count, 1);
    print_by_priority(task, count, 2);
    print_by_priority(task, count, 3);
    
    printf("-----------------------------\n");
    system("pause");    
}

void remove_task(struct task_register task[], int *count) {
    
    int search_id, tot = *count;
    printf("Enter the ID of the task to remove: ");
    scanf("%d", &search_id);
    
    for (int i = 0; i < tot; i++) {
        if (task[i].id == search_id) {
            task[i].id = 0;
            task[i].priority = 0;
            task[i].status = 0;
            printf("Task successfully removed!\n");
            
            task[i].id = 999; // Large number to push to the end
            sort(task, tot);
            (*count)--;
            printf("-----------------------------\n");
            system("pause");
            return;
        }
    }
    
    printf("[Error] No task found with this ID!");
    printf("\n-----------------------------\n");
    system("pause");
}

void print_by_priority(struct task_register task[], int count, int prior) {
        
    for (int i = 0; i < count; i++) {
        if (task[i].priority == prior) {
            
            printf("\n> %d. (ID-%d)\n", i+1, task[i].id);
            printf("Description: %s\n", task[i].description);
            
            printf("Priority: "); 
            if (task[i].priority == 3) {
                printf("High\n");
            } else if (task[i].priority == 2) {
                printf("Medium\n");
            } else {
                printf("Low\n");
            }
            
            printf("Completed?: "); 
            if (task[i].status) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
}
