#include<stdio.h>

int main(){
    int rows;
    printf("enter the no.  of rows:");
    scanf("%d",&rows);
    int space=rows;
    for(int i=1;i<=rows;i++){
         for( int k =1;k<=space;k++){
        printf(" ");
    }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
         space -=1;
        printf("\n");
       
    }
    return 0;
}