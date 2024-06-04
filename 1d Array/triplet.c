#include <stdio.h>

int main()
{
    int x, size, count = 0;
    printf("enter number :");
    scanf("%d", &x);
    printf("enter size of array:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                count++;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
            }
        }
    }
            printf("%d",count);
            return 0;
        }