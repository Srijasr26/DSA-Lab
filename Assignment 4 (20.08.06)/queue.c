#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Add customer
void addCustomer()
{
    int customer;

    if (rear == MAX - 1)
    {
        printf("\nHouse Full! No more seats available.\n");
        return;
    }

    printf("Enter customer number: ");
    scanf("%d", &customer);

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = customer;

    printf("Customer %d added successfully.\n", customer);
}

// Serve customer
void serveCustomer()
{
    if (front == -1 || front > rear)
    {
        printf("\nNo customer to serve.\n");
        return;
    }

    printf("\nCustomer %d is served.\n", queue[front]);
    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

// Display all customers
void displayCustomers()
{
    int i;

    if (front == -1)
    {
        printf("\nNo customers in the queue.\n");
        return;
    }

    printf("\nCustomers in the queue:\n");

    for (i = front; i <= rear; i++)
    {
        printf("Customer %d\n", queue[i]);
    }
}

// Main function
int main()
{
    int choice;

    while (1)
    {
        printf("\n===== CINEMA TICKET COUNTER =====\n");
        printf("1. Add Customer\n");
        printf("2. Serve Customer\n");
        printf("3. Display All Customers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addCustomer();
                break;

            case 2:
                serveCustomer();
                break;

            case 3:
                displayCustomers();
                break;

            case 4:
                printf("\nProgram ended.\n");
                return 0;

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}