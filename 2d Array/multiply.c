#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter no. of row and col of first matrix:");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("\nenter elements of 1st matrix:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("first matrix is :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("enter no. of row and col of second matrix:");
    scanf("%d %d",&c,&d);
    int brr[c][d];
    printf("\nenter elements of 2nd matrix:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("second matrix is :\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    if(b != c){
    printf("Error! column of first matrix not equal to row of second.\n");
    }

    int res[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            res[i][j]=0;
            for(int k=0;k<b;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    printf("multiplied matrix is:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}