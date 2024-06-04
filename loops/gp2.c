#include<stdio.h>

int main(){
    int x;
    printf("enter the x:");
    scanf("%d",&x);
    int a=2;
    for(int i=1;i<=x;i++){
        printf("%d ",a);
        a *=2;
    }
    return 0;
}