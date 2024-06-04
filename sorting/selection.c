#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nentered array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int idx=-1;
        int min=arr[i];
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                idx=j;
            }
        }
        if(idx!=-1){
            int temp=arr[idx];
            arr[idx]=arr[i];
            arr[i]=temp;
        }
        }
    printf("\nsorted array in ascending order is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}