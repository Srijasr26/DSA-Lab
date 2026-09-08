#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

char peek()
{
    return stack[top];
}

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;

    if (ch == '*' || ch == '/')
        return 2;

    return 0;
}

/* Infix to Postfix */
void infixToPostfix(char infix[], char postfix[])
{
    int i, j = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        if (isdigit(ch))
        {
            postfix[j++] = ch;
        }
        else
        {
            while (top != -1 &&
                   precedence(peek()) >= precedence(ch))
            {
                postfix[j++] = pop();
            }

            push(ch);
        }
    }

    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}

/* Evaluate Postfix */
int evaluatePostfix(char postfix[])
{
    int st[MAX];
    int top2 = -1;
    int i, a, b;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isdigit(postfix[i]))
        {
            st[++top2] = postfix[i] - '0';
        }
        else
        {
            b = st[top2--];
            a = st[top2--];

            switch (postfix[i])
            {
                case '+':
                    st[++top2] = a + b;
                    break;

                case '-':
                    st[++top2] = a - b;
                    break;

                case '*':
                    st[++top2] = a * b;
                    break;

                case '/':
                    st[++top2] = a / b;
                    break;
            }
        }
    }

    return st[top2];
}

int main()
{
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);
    printf("Result: %d\n", evaluatePostfix(postfix));

    return 0;
}