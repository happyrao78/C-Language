#include<stdio.h>

int main(){
    int y;
    printf("enter a number:");
    scanf("%d",&y);
    int sum=0;
    int ld=0;
    while(y!=0){
        ld = y%10;
        sum +=ld;
        y /=10;
    }
    printf("%d is sum ",sum);
    return 0;
}