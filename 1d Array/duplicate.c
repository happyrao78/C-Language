#include<stdio.h>

int main(){
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        }
         for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){

                    printf("duplicate element is %d \n",arr[i]);
                    break;
                }
            }
         }
    return 0;
}