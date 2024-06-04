#include<stdio.h>

int main(){
  int x;
  printf("enter the size of array:");
  scanf("%d",&x);
  int arr[x];
  printf("enter elements in array:\n");
  for(int i=0;i<x;i++){
    scanf("%d",&arr[i]);
  }
  printf("array is :\n");
  for(int i=0;i<x;i++){
    printf("%d ",arr[i]);
  }
  printf("\nreversed array is:\n");
  for(int i=x-1;i>=0;i--){
    printf("%d ",arr[i]);
  }
  return 0;
}