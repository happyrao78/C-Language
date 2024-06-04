#include<stdio.h>
void sum(int n,int s){
    if (n==0){
        printf("%d",s);
        return;
        }
        sum(n-1,s+n);
        return;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    sum(n,0);
        return 0;
}