#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=10;
    int *arr=(int*)malloc(n*sizeof(int));
    int i,num,count=0;
    printf("enter %d integers:",n);
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("enter the number to count:");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(*(arr+i)==num){
            count++;
        }
    }
    printf("%d times %d number is present",count,num);
    free(arr);
    return 0;
}