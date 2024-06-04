#include<stdio.h>
int main(){
    int x,y,a,b;
    printf("enter number of rows and column for your matrix 1:");
    scanf("%d %d",&x,&y);

    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            scanf("%d",&arr[i][j]);
    }
    }
    printf("enter number of rows and column for your matrix 2:");
    scanf("%d %d",&a,&b);
    int brr[a][b];
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++) {
            scanf("%d",&brr[i][j]);
    }
     }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(x==a && y==b){
                printf("%d ",arr[i][j]+brr[i][j]);
                break;
            }
            else{
                printf("matrix not matching for addition");
                break;
            }
        }
    printf("\n");
    }
    return 0;
}
    