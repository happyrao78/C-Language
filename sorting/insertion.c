#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("unsorted:\n");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=1;i<=n-1;i++){
    int j=i;
    //j zeroth index pe store hi nhi hoga kabhi only at first isliye ye condition lgyai hai yha pe 
    while(j>0 && arr[j]<arr[j-1]){
        int temp= arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    }
    printf("\nsorted:\n");
     for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    
    return 0;
}