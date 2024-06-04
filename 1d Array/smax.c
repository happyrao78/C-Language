#include<stdio.h>
int main(){
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements in array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int smax=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("second maximum element in array is %d",smax);
    return 0;
}
