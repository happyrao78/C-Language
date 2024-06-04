#include<stdio.h>

int main(){
     int x,y;
    printf("enter row and col to enter:");
    scanf("%d%d",&x,&y);
    int arr[x][y];
    printf("enter the elements of matrix:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        printf("formed matrix is :\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nspiraled matrix is :\n");
    int minr=0;
    int maxr=x-1;
    int minc=0;
    int maxc=y-1;
    int tne=x*y;
    int count=0;
    while(count<tne){
        //print minimum row:
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        //print maximum column:
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        //print maximum row:
        for(int j=maxc;j>=minc;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        //print minimum column:
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
        if (count>=tne) break;
    }
   
    return 0;
}
