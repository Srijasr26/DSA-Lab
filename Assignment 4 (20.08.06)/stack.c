/*Bank account keeping the transaction amount as it is processed by customer.
THe transaction amount of last customer is stores at top position after completion of all transaction, the manager pull the amount one by one and display the amount and find
total-transaction-amount to print define following funstion:
push(): to insert amount in
pop(): to remove amount
dosum(): find sum of all transaction amount
AMOUNT INSERTED IN FOLLOWING ORDER:
1050,2090,3000,6000,5500,8900*/


#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Function to insert amount
void push(int amount)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = amount;
    }
}

// Function to remove amount
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

// Function to find total transaction amount
int dosum()
{
    int sum = 0;
    int i;

    for (i = 0; i <= top; i++)
    {
        sum = sum + stack[i];
    }

    return sum;
}

int main()
{
    int amount[] = {1050, 2090, 3000, 6000, 5500, 8900};
    int n = 6;
    int i, x, total;

    // Insert transactions
    for (i = 0; i < n; i++)
    {
        push(amount[i]);
    }

    printf("Transactions removed from stack:\n");

    // Remove and display transactions
    while (top != -1)
    {
        x = pop();
        printf("%d\n", x);
    }

    // Calculate total
    total = 1050 + 2090 + 3000 + 6000 + 5500 + 8900;

    printf("Total Transaction Amount = %d\n", total);

    return 0;
}