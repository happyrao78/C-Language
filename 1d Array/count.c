#include<stdio.h>

int main(){
    int x,size,count=0;
    printf("enter the number which you want to compare with:");
    scanf("%d",&x);
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(x < arr[i]){
           count++;
        }
    }
     printf("%d elements are greator than %d in given array of %d size",count,x,size);
    
    return 0;
}