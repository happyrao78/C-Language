#include<stdio.h>
int main(){
    int size,sum=0,avg;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=size;i++){
        printf("%d ",arr[i]);
        sum += arr[i];
    }
    printf("\nsum is :%d \n",sum);
    avg = sum/size;
    printf("average is :%d",avg);
    return 0;
}