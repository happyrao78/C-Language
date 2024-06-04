#include <stdio.h>

int main()
{
    int size, sum_odd = 0, sum_even = 0;
    printf("enter the size of array:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
    }
printf("difference is %d", sum_even-sum_odd);
    return 0;
}