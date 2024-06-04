#include<stdio.h>
int reverse(int  arr[],int a ,int b){
for(int i=a,j=b;i<j;i++,j--){
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
return;

}

int main(){
    int  n;
    printf("enter thhe size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter the number of elements to be rotated:");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}