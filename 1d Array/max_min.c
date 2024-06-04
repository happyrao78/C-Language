#include<stdio.h>
int main(){
    int x;
    printf("enter size:");
    scanf("%d",&x);
    int arr[x];
    //for minimum element we wil  assign the first element to the min variable
    int max =-1;
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("maximum element in entered array is %d",max);
    return 0;
}
