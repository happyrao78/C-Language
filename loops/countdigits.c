#include<stdio.h>

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int count =0;
    while(n!=0){
        n /=10;
        count++;
    }
    printf("%d ",count);
    return 0;
}