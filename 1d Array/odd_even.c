#include <stdio.h>
int main()
{
    int size;
    printf("enter size:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}