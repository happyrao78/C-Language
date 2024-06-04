#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter coordinates:");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("straight line");
    }
    else{
        printf("not straight line");
        }
    return 0;
}