#include<stdio.h>
int fibo(int x){
    if(x==0) return 0;
    if(x==1 || x==2) return 1;
    int a1=fibo(x-1);
    int a2=fibo(x-2);
    return a1+a2;
}

int main(){
    int x;
    printf("enter x:");
    scanf("%d",&x);
    printf("answer is :%d",fibo(x));
    return 0;
}