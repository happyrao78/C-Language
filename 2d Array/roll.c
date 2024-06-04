#include<stdio.h>

int main(){
    int x;
    printf("enter number of students:");
    scanf("%d",&x);
    int arr[x][2];
    printf("enter roll number and marks of students:");
    for(int  i=0;i<x;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("roll\tMarks\n");
     for(int  i=0;i<x;i++){
        for(int j=0;j<2;j++){
            printf("%d\t ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}