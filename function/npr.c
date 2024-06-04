#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact *=i;
    }
    return fact;
}
int combination(int n ,int r){
    int ncr=factorial(n)/(factorial(n-r));
    return ncr;
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
printf("result:%d",combination(n,r));

    
    return 0;
}