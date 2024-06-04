#include<stdio.h>
int main(){
    int x,y;
    printf("enter the number of rows:");
    scanf("%d",&x);
    printf("enter number of columns:");
    scanf("%d",&y);
    int arr[x][y];
    printf("enter the elements in your matrix:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}