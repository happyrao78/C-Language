#include<stdio.h>

int main(){
    int x,y;
    printf("enter the row and element of your matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==j){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
        }
        printf("\n");
    }
    return 0;
}