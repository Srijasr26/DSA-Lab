#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push()
{
    int acc_no;

    if(top == MAX - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        printf("Enter acc-no. to be pushed: ");
        scanf("%d", &acc_no);

        top++;
        stack[top] = acc_no;

        printf("%d pushed into stack.\n", acc_no);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}