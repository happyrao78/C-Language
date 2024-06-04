#include<stdio.h>
int main(){
    int x,i,j;
    printf("enter the size of array:");
    scanf("%d",&x);
    int arr[x];
    printf("enter the elements in array:");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    printf("entered elements in array are as follows:\n");
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    int check=0;
    int count=0;
    for( i=0;i<x;i++){
        check =0;
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                check=1;
                break;
            }
        }
            if(check==0){
                count++;
            }
        }
    
if(count==0){
    printf("\nneither prime nor composite");
}
else{
    printf("\n%d prime number in entered array",count);
}
    return 0;
}