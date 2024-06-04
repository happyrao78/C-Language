#include<stdio.h>

int main(){
    int arr[20],temp;
    arr[0]=55;
    arr[12]=44;
    temp=arr[12];
    arr[12]=arr[0];
    arr[0]=temp;
    printf("\n%d%d",arr[0],arr[12]);
    return 0;
}