#include <stdio.h>

int main()
{
    int marks[5];
    printf("enter the marks of five students:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d",i);
        }
    }
    return 0;
}