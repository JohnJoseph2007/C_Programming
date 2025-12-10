// WAP to find the 90 degree rotation of a matrix.
#include <stdio.h>
int main()
{
    int arr[100][100], rotated[100][100];
    int r, c;
    printf("Enter rows and columns of the array:\n");
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            rotated[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r / 2; j++)
        {
            rotated[i][j] += rotated[i][r - 1 - j];
            rotated[i][r - 1 - j] = rotated[i][j] - rotated[i][r - 1 - j];
            rotated[i][j] = rotated[i][j] - rotated[i][r - 1 - j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }
}