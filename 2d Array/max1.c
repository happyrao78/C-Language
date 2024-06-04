#include<stdio.h>
int main(){
    int x,y,maxcount=0,idx=-1;
    printf("enter no. of rows & column of matrix:");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    int z;
    printf("enter the number which you want to search maximum:");
    scanf("%d",&z);
        printf("now enter elements in your matrix:");

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        int count=0;
        for(int j=0;j<y;j++){
            if(arr[i][j]==z){
                count++;
            }
            if(maxcount<count){
                maxcount=count;
                idx=i;
                }
            }
    }
            printf("%d times a %d has repeated and its index is %d",maxcount,z,idx);
        printf("\n");
    return 0;
}