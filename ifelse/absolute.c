#include<stdio.h>
int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    if(n<0){
        n*=-1;
    }
    printf("%d",n);
    return 0;
}