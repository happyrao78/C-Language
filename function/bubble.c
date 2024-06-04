#include<stdio.h>
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
} return;
}

int main(){
    int x;
    printf("enter the size:");
    scanf("%d",&x);
    int arr[x];
    printf("enter the elements of array:");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
            sort(arr,x);

    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}