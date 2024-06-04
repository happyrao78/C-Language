#include<stdio.h>
int fact(int a){
    if(a==0 || a==1) return 1;
    else return a*fact(a-1);
    
}

int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("factorial of %d is :%d",x,fact(x));
    return 0;
}