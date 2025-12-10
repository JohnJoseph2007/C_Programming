// Using pointers to multiply two matrices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int m1_rows, m1_cols, m2_rows, m2_cols;
    int *pm1, *pm2, *pm3;
    pm1 = &matrix1;
    pm2 = &matrix2;
    pm3 = &result;

    printf("Enter number of rows and columns for first matrix:\n");
    scanf("%d%d", &m1_rows, &m1_cols);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m1_rows; i++)
    {
        for (int j = 0; j < m1_cols; j++)
        {
            scanf("%d", (pm1 + (i * 10) + j));
        }
    }
    printf("Enter number of rows and columns for second matrix:\n");
    scanf("%d%d", &m2_rows, &m2_cols);
    if (m1_cols != m2_rows)
    {
        printf("Matrix multiplication not possible.\n");
        exit(0);
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m2_rows; i++)
    {
        for (int j = 0; j < m2_cols; j++)
        {
            scanf("%d", (pm2 + (i * 10) + j));
        }
    }

    // Initializing result matrix to zero to avoid garbage value addition
    for (int i = 0; i < m1_rows; i++)
    {
        for (int j = 0; j < m2_cols; j++)
        {
            *(pm3 + (i * 10) + j) = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m1_rows; i++)
    {
        for (int j = 0; j < m2_cols; j++)
        {
            for (int k = 0; k < m1_cols; k++)
            {
                *(pm3 + (i * 10) + j) += (*(pm1 + (i * 10) + k)) * (*(pm2 + (k * 10) + j));
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < m1_rows; i++)
    {
        for (int j = 0; j < m2_cols; j++)
        {
            printf("%d ", *(pm3 + (i * 10) + j));
        }
        printf("\n");
    }
}