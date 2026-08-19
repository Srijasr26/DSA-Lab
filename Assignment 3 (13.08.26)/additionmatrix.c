#include <stdio.h>

int main()
{
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    /* Addition of A and B */
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatrix A:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (A + B):\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}