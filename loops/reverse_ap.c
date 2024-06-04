#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    int y=100;
    for(int i=x;i>0;i--){
        printf("%d ",y);
        y -= 3;
        
    }
    return 0;
}