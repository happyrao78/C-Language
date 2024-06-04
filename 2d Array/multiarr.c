#include<stdio.h>

int main(){
    int x,y,z;
    printf("enter value  of x,y,z");
    scanf("%d %d %d",&x,&y,&z);
    int arr[x][y][z];
    printf("enter elements:");
    for(int i=0;i<x;i++){
        for (int j=0;j<y;j++)
{
    for(int k=0;k<z;k++){
        scanf("%d",&arr[i][j][k]);
    }
}    }
 for(int i=0;i<x;i++){
        for (int j=0;j<y;j++)
{
    for(int k=0;k<z;k++){
        printf("%d",arr[i][j][k]);
    }
    printf(",,");
} 
printf("\n");
   }
    return 0;
}