#include<stdio.h>
void swap(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int k;
    printf("enter the size of array:");
    scanf("%d",&k);
    int arr[k];
    for(int i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }
     printf("%d %d",arr[0],arr[1]);
     swap(arr);
     printf("\n%d %d",arr[0],arr[1]);

    return 0;
}