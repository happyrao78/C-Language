#include<stdio.h>

int main(){
    int n;
    printf("enter rows and col.:");
    scanf("%d %d",&n,&n);
    int arr[n][n];
    printf("enter elements in array:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
    }
    }
    printf("normal matrix is :\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    printf("transposed matrix is:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            printf("%d ",arr[j][i]);
    }
    printf("\n");
    }
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
        printf("rotated array by 90 degree clockwise is:\n");
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            printf("%d ",arr[i][j]);
    }
    printf("\n");
    }

    return 0;
}