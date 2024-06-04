#include<stdio.h>

int main(){
    int x,y;
    printf("enter the row and element of your matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    printf("enter the elements of the matrix:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            if(i==j){
            scanf("%d", &arr[i][j]);
            break;
            }
    }
    }
    printf("the entered matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==j){
            printf("%d ",arr[i][j]);
        }
        else{
            printf("0 ");
        }
        }
        printf("\n");
    }
    return 0;
}