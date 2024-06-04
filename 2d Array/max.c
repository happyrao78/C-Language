#include<stdio.h>
int main(){
    int x,y;
    printf("enter number of rows and column for your matrix:");
    scanf("%d %d",&x,&y);
    
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            scanf("%d",&arr[i][j]);
    }
    }
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
     int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) {
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];                
            }
    }
    }
    printf("maximum element is %d\n",max);
    printf("minimum element is %d",min);
    return 0;
}
    