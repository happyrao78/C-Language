#include<stdio.h>
int sum(int x){
    if(x==0 || x==1) {return x;}
    int z = x+ sum(x-1);
    return z;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("sum is %d",sum(n));
    
    return 0;
}