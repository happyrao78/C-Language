#include<stdio.h>

int main(){
    int size,sum=0;
    printf("enter the size of array:");
    scanf("%d",&size);
    int add[size];
    for(int i=0;i<size;i++){
        scanf("%d",&add[i]);
        sum = sum + add[i];
    }
    printf("the sum of elements entered by you in the respective array is :%d",sum);
    return 0;
}