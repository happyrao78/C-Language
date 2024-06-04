#include<stdio.h>

int main(){
    int n,sum=0,sum2=0;
     printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    sum2= n*(n+1)/2;
        printf("the missing element is %d",sum2-sum);
     
    return 0;
}