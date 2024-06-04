#include<stdio.h>
#include<stdbool.h>

int main(){
    int size;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the random elements in array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("randomly entered elements in array are:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size-1;i++){
        bool flag=true;// sorted HAI YE ASSUME KIYA HUMNE 
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    printf("\nsorted array in ascending order are:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}