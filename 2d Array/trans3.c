#include<stdio.h>
int main(){
    int x,y;
    printf("enter rows and col.:");
    scanf("%d%d",&x,&y);
    int arr[x][y];
    printf("enter elements in array:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            scanf("%d",&arr[i][j]);
    }
    }
    printf("normal matrix is :\n");
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
     for(int i=0;i<y;i++){
        for(int j=i;j<x;j++) {
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
     }
    }
        printf("transposed matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            printf("%d ",arr[i][j]);
    }
    printf("\n");
    }

    return 0;
}