#include <stdio.h>
#include <stdlib.h>

// Structure for a student node
struct Node {
    int studentID;
    struct Node *next;
};

// Function to add a student
void addStudent(struct Node **head, int id) {
    struct Node *newNode;
    struct Node *temp;

    // Create a new node dynamically
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->studentID = id;
    newNode->next = NULL;

    // If list is empty
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        // Traverse to the last node
        temp = *head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Add new node at the end
        temp->next = newNode;
    }
}

// Function to display all students
void display(struct Node *head) {
    struct Node *temp = head;

    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("\nStudent Records:\n");

    while (temp != NULL) {
        printf("Student ID: %d\n", temp->studentID);
        temp = temp->next;
    }
}

int main() {
    struct Node *HEAD = NULL;
    int n, id, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Add students
    for (i = 0; i < n; i++) {
        printf("Enter Student ID %d: ", i + 1);
        scanf("%d", &id);

        addStudent(&HEAD, id);
    }

    // Display the linked list
    display(HEAD);

    return 0;
}