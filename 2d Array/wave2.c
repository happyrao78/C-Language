#include <stdio.h>

int main()
{
    int x, y;
    printf("enter row and col to enter:");
    scanf("%d%d", &x, &y);
    int arr[x][y];
    printf("enter the elements of matrix:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("formed matrix is :\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Waved matrix is:\n");
    for (int j = 0; j < y; j++)
    {
        if (j % 2 == 0)
        {

            for (int i = 0; i < x; i++)
            {

                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int i = x-1 ; i>=0; i--)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}