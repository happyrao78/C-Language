#include<stdio.h>
int main(){
    int y;
    printf("enter the value of y:");
    scanf("%d",&y);
    int a=4;
    for(int i=1;i<=y;i++){
        printf("%d ",a);
        a +=3;
    }
    return 0;
}