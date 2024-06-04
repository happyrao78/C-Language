#include<stdio.h>

int main(){
    int x;
    printf("enter size :");
    scanf("%d",&x);
    int arr[x];
    for(int i=0 ;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    printf("enter the indexes which you want to reverse:");
    scanf("%d %d",&a,&b);
    for(int i=a,j=b;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;}
        for(int i=0;i<x;i++){
       printf("%d",arr[i]);
    }
    return 0;
} 