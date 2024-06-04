#include<stdio.h>

int main(){
    int x;
    printf("enter the size of array:");
    scanf("%d",&x);
    int arr[x];
    printf("enter the elemets in aarya");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }  
    int brr[x];
    for(int i=0;i<x;i++){
         brr[i]=arr[x-i-1];
    }  
    for(int i=0;i<x;i++){
        printf("%d",brr[i]);
    }
        return 0;
}