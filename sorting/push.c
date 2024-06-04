#include<stdio.h>
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
        for(int j=0;j<size-1-i;j++){
            //hume 0 ko last me push krna hai ya pe
            if(arr[j]==0){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    printf("\nsorted array in ascending order are:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}