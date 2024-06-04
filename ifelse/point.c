#include<stdio.h>
int main(){
    int x,y;
    printf("enter  x and y:");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("origin");
    }
    else if(y==0){
        printf("x coordinate");
    }
    else if(x==0){
        printf("y coordinate");
    }
    else{
        printf("neither x nor y and not even at origin:");
    }
    return 0;
}