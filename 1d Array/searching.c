#include<stdio.h>
#include<stdbool.h>

int main(){
    int x,k,idx=-1;
    printf("enter the size of array:");
    scanf("%d",&x);
int arr[x];
for(int i=0;i<x;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<x;i++){
    printf("%d ",arr[i]);
}
printf("enter the number to search in the given array:");
scanf("%d",&k);
bool flag=false;
int count=0;
for(int i=0;i<x;i++){
    if(arr[i]==k){
        flag=true;
        idx=i;
        count++;
    }
}
if(flag==false){
    printf("%d element is not present in array",k);
}
else{
    printf("%d element is present in given array %d times and its index is/are :%d ",k,count,idx);
}

    return 0;
}