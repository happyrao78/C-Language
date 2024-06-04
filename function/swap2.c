#include<stdio.h>

int main(){
    int x,y;
    printf ("enter two nos.:");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("ans is%d %d",x,y);
    return 0;
}