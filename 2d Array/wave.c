#include<stdio.h>

int main(){
    int x,y;
    printf("enter row and col to enter:");
    scanf("%d%d",&x,&y);
    int arr[x][y];
    printf("enter the elements of matrix:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        printf("formed matrix is :\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
        printf("Waved matrix is:\n");
    for(int i=0;i<x;i++){
        if(i%2==0){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        }
        else{
            for(int j=y-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
    printf("\n");
    }
    return 0;
}