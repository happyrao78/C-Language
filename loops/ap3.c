#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    float y=100;
    for(int i=x;i>=0;i--){
        printf("%.0f ",y);
        y /=2;
    }
    return 0;
}