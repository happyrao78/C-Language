#include<stdio.h>
int greatest(int arr[],int n){
    int max=arr[0];
    for(int  i=0;i<n;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    return max;
}
int main(){
    int x;
    printf("enter the size of array:");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<x;i++){
    printf(" %d",arr[i]);
}
printf("\nmax element in given array is:%d",greatest(arr,x));

    return 0;
}