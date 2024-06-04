#include<stdio.h>

int main(){
    int x,y;
    printf("enter the number of rows and column:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
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
    int max_sum=0;int max_row=0;
    for(int i=0;i<x;i++){
        int row_sum=0;
        for(int j=0;j<y;j++){
            row_sum+=arr[i][j];
        }
        if(row_sum>max_sum){
            max_sum=row_sum;
            max_row=i;
        }
    }
    printf("maximum row is %d and its sum is %d",max_row,max_sum);
    return 0;
}