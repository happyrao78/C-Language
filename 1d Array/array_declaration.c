#include<stdio.h>

int main(){
    int arr[10];
    printf("enter the elements in array:");
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=9;i>=0;i--){
        printf("%dth element is: %d\n",i,arr[i]);
    }

    
    return 0;
}