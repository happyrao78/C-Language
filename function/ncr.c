#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact *=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/factorial(r)*factorial(n-r);
    return ncr;
}

int main(){
    int n,r;
    printf("enter the n and r:");
    scanf("%d%d",&n,&r);
    printf("%d",combination(n,r));
    return 0;
}
