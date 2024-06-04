#include<stdio.h>

int main(){
    int x,y;
    printf("enter a value:\n");
    scanf("%d",&x);
    printf("enter b value:\n");
    scanf("%d",&y);
    printf("a is:%d\n",x);
    printf("b is:%d\n",y);
    int temp=x;
    x=y;
    y=temp;
    printf("a is:%d\n",x);
    printf("b is:%d",y);
    return 0;
}